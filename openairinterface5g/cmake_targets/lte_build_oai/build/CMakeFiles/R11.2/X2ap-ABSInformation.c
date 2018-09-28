/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/nano/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-ABSInformation.h"

static asn_per_constraints_t asn_PER_type_X2ap_ABSInformation_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2ap_ABSInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_ABSInformation, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_ABSInformationFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_ABSInformation, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_ABSInformationTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_ABSInformation, choice.abs_inactive),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"abs-inactive"
		},
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_ABSInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 78 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd at 79 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* abs-inactive at 80 */
};
static asn_CHOICE_specifics_t asn_SPC_X2ap_ABSInformation_specs_1 = {
	sizeof(struct X2ap_ABSInformation),
	offsetof(struct X2ap_ABSInformation, _asn_ctx),
	offsetof(struct X2ap_ABSInformation, present),
	sizeof(((struct X2ap_ABSInformation *)0)->present),
	asn_MAP_X2ap_ABSInformation_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_ABSInformation = {
	"X2ap-ABSInformation",
	"X2ap-ABSInformation",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_X2ap_ABSInformation_constr_1,
	asn_MBR_X2ap_ABSInformation_1,
	3,	/* Elements count */
	&asn_SPC_X2ap_ABSInformation_specs_1	/* Additional specs */
};

