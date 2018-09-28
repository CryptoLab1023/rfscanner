/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/nano/openair-cn/src/s1ap/messages/asn1/r10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-UE-S1AP-ID-pair.h"

static asn_TYPE_member_t asn_MBR_S1ap_UE_S1AP_ID_pair_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UE_S1AP_ID_pair, mME_UE_S1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_MME_UE_S1AP_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mME-UE-S1AP-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UE_S1AP_ID_pair, eNB_UE_S1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ENB_UE_S1AP_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eNB-UE-S1AP-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_UE_S1AP_ID_pair, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_UE_S1AP_ID_pair_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_S1ap_UE_S1AP_ID_pair_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_UE_S1AP_ID_pair_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mME-UE-S1AP-ID at 1343 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eNB-UE-S1AP-ID at 1344 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions at 1346 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_UE_S1AP_ID_pair_specs_1 = {
	sizeof(struct S1ap_UE_S1AP_ID_pair),
	offsetof(struct S1ap_UE_S1AP_ID_pair, _asn_ctx),
	asn_MAP_S1ap_UE_S1AP_ID_pair_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_UE_S1AP_ID_pair_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_UE_S1AP_ID_pair = {
	"S1ap-UE-S1AP-ID-pair",
	"S1ap-UE-S1AP-ID-pair",
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
	asn_DEF_S1ap_UE_S1AP_ID_pair_tags_1,
	sizeof(asn_DEF_S1ap_UE_S1AP_ID_pair_tags_1)
		/sizeof(asn_DEF_S1ap_UE_S1AP_ID_pair_tags_1[0]), /* 1 */
	asn_DEF_S1ap_UE_S1AP_ID_pair_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_UE_S1AP_ID_pair_tags_1)
		/sizeof(asn_DEF_S1ap_UE_S1AP_ID_pair_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_UE_S1AP_ID_pair_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_UE_S1AP_ID_pair_specs_1	/* Additional specs */
};

