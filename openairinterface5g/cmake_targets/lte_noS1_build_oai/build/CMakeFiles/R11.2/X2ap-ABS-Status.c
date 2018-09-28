/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/nano/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-ABS-Status.h"

static asn_TYPE_member_t asn_MBR_X2ap_ABS_Status_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_ABS_Status, dL_ABS_status),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_DL_ABS_status,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dL-ABS-status"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_ABS_Status, usableABSInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_X2ap_UsableABSInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"usableABSInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct X2ap_ABS_Status, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_X2ap_ABS_Status_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_X2ap_ABS_Status_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_ABS_Status_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dL-ABS-status at 112 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* usableABSInformation at 113 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions at 115 */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2ap_ABS_Status_specs_1 = {
	sizeof(struct X2ap_ABS_Status),
	offsetof(struct X2ap_ABS_Status, _asn_ctx),
	asn_MAP_X2ap_ABS_Status_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_X2ap_ABS_Status_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_ABS_Status = {
	"X2ap-ABS-Status",
	"X2ap-ABS-Status",
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
	asn_DEF_X2ap_ABS_Status_tags_1,
	sizeof(asn_DEF_X2ap_ABS_Status_tags_1)
		/sizeof(asn_DEF_X2ap_ABS_Status_tags_1[0]), /* 1 */
	asn_DEF_X2ap_ABS_Status_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_ABS_Status_tags_1)
		/sizeof(asn_DEF_X2ap_ABS_Status_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_X2ap_ABS_Status_1,
	3,	/* Elements count */
	&asn_SPC_X2ap_ABS_Status_specs_1	/* Additional specs */
};

