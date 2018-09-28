/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/nano/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-E-RABDataForwardingItem.h"

static asn_TYPE_member_t asn_MBR_S1ap_E_RABDataForwardingItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABDataForwardingItem, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_E_RAB_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RAB-ID"
		},
	{ ATF_POINTER, 5, offsetof(struct S1ap_E_RABDataForwardingItem, dL_transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_TransportLayerAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dL-transportLayerAddress"
		},
	{ ATF_POINTER, 4, offsetof(struct S1ap_E_RABDataForwardingItem, dL_gTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_GTP_TEID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dL-gTP-TEID"
		},
	{ ATF_POINTER, 3, offsetof(struct S1ap_E_RABDataForwardingItem, uL_TransportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_TransportLayerAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uL-TransportLayerAddress"
		},
	{ ATF_POINTER, 2, offsetof(struct S1ap_E_RABDataForwardingItem, uL_GTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_GTP_TEID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uL-GTP-TEID"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_E_RABDataForwardingItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_E_RABDataForwardingItem_oms_1[] = { 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_S1ap_E_RABDataForwardingItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_E_RABDataForwardingItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID at 472 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dL-transportLayerAddress at 473 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dL-gTP-TEID at 474 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uL-TransportLayerAddress at 475 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uL-GTP-TEID at 476 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions at 478 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_E_RABDataForwardingItem_specs_1 = {
	sizeof(struct S1ap_E_RABDataForwardingItem),
	offsetof(struct S1ap_E_RABDataForwardingItem, _asn_ctx),
	asn_MAP_S1ap_E_RABDataForwardingItem_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_S1ap_E_RABDataForwardingItem_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABDataForwardingItem = {
	"S1ap-E-RABDataForwardingItem",
	"S1ap-E-RABDataForwardingItem",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_E_RABDataForwardingItem_tags_1,
	sizeof(asn_DEF_S1ap_E_RABDataForwardingItem_tags_1)
		/sizeof(asn_DEF_S1ap_E_RABDataForwardingItem_tags_1[0]), /* 1 */
	asn_DEF_S1ap_E_RABDataForwardingItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_E_RABDataForwardingItem_tags_1)
		/sizeof(asn_DEF_S1ap_E_RABDataForwardingItem_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_E_RABDataForwardingItem_1,
	6,	/* Elements count */
	&asn_SPC_S1ap_E_RABDataForwardingItem_specs_1	/* Additional specs */
};

