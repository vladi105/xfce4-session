/* $Id$ */
/*-
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <xfce4-session/xfsm-client.h>


void
xfsm_client_free (XfsmClient *client)
{
  g_return_if_fail (client != NULL);
  
  if (client->properties != NULL)
    xfsm_properties_free (client->properties);
  if (client->save_timeout_id > 0)
    g_source_remove (client->save_timeout_id);
  g_free (client);
}


void
xfsm_client_set_initial_properties (XfsmClient     *client,
                                    XfsmProperties *properties)
{
  g_return_if_fail (client != NULL);
  g_return_if_fail (properties != NULL);
  
  if (client->properties != NULL)
    xfsm_properties_free (client->properties);
  client->properties = properties;
  client->id = properties->client_id;
}

