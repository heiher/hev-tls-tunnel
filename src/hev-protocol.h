/*
 ============================================================================
 Name        : hev-protocol.h
 Author      : Heiher <admin@heiher.info>
 Version     : 0.0.1
 Copyright   : Copyright (c) 2012 everyone.
 Description : 
 ============================================================================
 */

#ifndef __HEV_PROTOCOL_H__
#define __HEV_PROTOCOL_H__

#include <glib.h>

#define HEV_PROTO_ACTIVATE_KEY  0xA0F0ABCD
#define HEV_PROTO_HEADER_REAL_SIZE  (sizeof (HevProtocolHeader))
#define HEV_PROTO_HEADER_MINN_SIZE  280
#define HEV_PROTO_HEADER_MAXN_SIZE  1024

typedef struct _HevProtocolHeader HevProtocolHeader;

struct _HevProtocolHeader
{
    guint32 activate_key;
    guint32 length;
};

gboolean hev_protocol_header_set (HevProtocolHeader *self, guint32 length);
gboolean hev_protocol_header_is_valid (const HevProtocolHeader *self);
const gchar * hev_protocol_get_invalid_message (gsize *count);

#endif /* __HEV_PROTOCOL_H__ */
