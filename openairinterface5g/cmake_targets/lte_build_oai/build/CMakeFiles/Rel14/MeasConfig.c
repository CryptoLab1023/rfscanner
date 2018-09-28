/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "MeasConfig.h"

static asn_per_constraints_t asn_PER_type_speedStatePars_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_measScaleFactor_r12_constr_23 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasConfig__speedStatePars__setup, mobilityStateParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityStateParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mobilityStateParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasConfig__speedStatePars__setup, timeToTrigger_SF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeToTrigger-SF"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mobilityStateParameters at 6581 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timeToTrigger-SF at 6583 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_14 = {
	sizeof(struct MeasConfig__speedStatePars__setup),
	offsetof(struct MeasConfig__speedStatePars__setup, _asn_ctx),
	asn_MAP_setup_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_14 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_14,
	sizeof(asn_DEF_setup_tags_14)
		/sizeof(asn_DEF_setup_tags_14[0]) - 1, /* 1 */
	asn_DEF_setup_tags_14,	/* Same as above */
	sizeof(asn_DEF_setup_tags_14)
		/sizeof(asn_DEF_setup_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_14,
	2,	/* Elements count */
	&asn_SPC_setup_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_speedStatePars_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasConfig__speedStatePars, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasConfig__speedStatePars, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_speedStatePars_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 6579 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 6581 */
};
static asn_CHOICE_specifics_t asn_SPC_speedStatePars_specs_12 = {
	sizeof(struct MeasConfig__speedStatePars),
	offsetof(struct MeasConfig__speedStatePars, _asn_ctx),
	offsetof(struct MeasConfig__speedStatePars, present),
	sizeof(((struct MeasConfig__speedStatePars *)0)->present),
	asn_MAP_speedStatePars_tag2el_12,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_speedStatePars_12 = {
	"speedStatePars",
	"speedStatePars",
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
	&asn_PER_type_speedStatePars_constr_12,
	asn_MBR_speedStatePars_12,
	2,	/* Elements count */
	&asn_SPC_speedStatePars_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_18[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasConfig__ext1, measObjectToAddModList_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectToAddModList_v9e0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectToAddModList-v9e0"
		},
};
static int asn_MAP_ext1_oms_18[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measObjectToAddModList-v9e0 at 6586 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_18 = {
	sizeof(struct MeasConfig__ext1),
	offsetof(struct MeasConfig__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_18,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_18 = {
	"ext1",
	"ext1",
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
	asn_DEF_ext1_tags_18,
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_18,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_18,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_20[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasConfig__ext2, allowInterruptions_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"allowInterruptions-r11"
		},
};
static int asn_MAP_ext2_oms_20[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* allowInterruptions-r11 at 6588 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_20 = {
	sizeof(struct MeasConfig__ext2),
	offsetof(struct MeasConfig__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_20,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_20,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_20 = {
	"ext2",
	"ext2",
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
	asn_DEF_ext2_tags_20,
	sizeof(asn_DEF_ext2_tags_20)
		/sizeof(asn_DEF_ext2_tags_20[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_20,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_20)
		/sizeof(asn_DEF_ext2_tags_20[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_20,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measScaleFactor_r12_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasConfig__ext3__measScaleFactor_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasConfig__ext3__measScaleFactor_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasScaleFactor_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_measScaleFactor_r12_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 6591 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 6593 */
};
static asn_CHOICE_specifics_t asn_SPC_measScaleFactor_r12_specs_23 = {
	sizeof(struct MeasConfig__ext3__measScaleFactor_r12),
	offsetof(struct MeasConfig__ext3__measScaleFactor_r12, _asn_ctx),
	offsetof(struct MeasConfig__ext3__measScaleFactor_r12, present),
	sizeof(((struct MeasConfig__ext3__measScaleFactor_r12 *)0)->present),
	asn_MAP_measScaleFactor_r12_tag2el_23,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measScaleFactor_r12_23 = {
	"measScaleFactor-r12",
	"measScaleFactor-r12",
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
	&asn_PER_type_measScaleFactor_r12_constr_23,
	asn_MBR_measScaleFactor_r12_23,
	2,	/* Elements count */
	&asn_SPC_measScaleFactor_r12_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_22[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasConfig__ext3, measScaleFactor_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_measScaleFactor_r12_23,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measScaleFactor-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasConfig__ext3, measIdToRemoveListExt_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdToRemoveListExt_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measIdToRemoveListExt-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasConfig__ext3, measIdToAddModListExt_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdToAddModListExt_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measIdToAddModListExt-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasConfig__ext3, measRSRQ_OnAllSymbols_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measRSRQ-OnAllSymbols-r12"
		},
};
static int asn_MAP_ext3_oms_22[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_ext3_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measScaleFactor-r12 at 6591 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measIdToRemoveListExt-r12 at 6594 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measIdToAddModListExt-r12 at 6595 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measRSRQ-OnAllSymbols-r12 at 6596 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_22 = {
	sizeof(struct MeasConfig__ext3),
	offsetof(struct MeasConfig__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_22,
	4,	/* Count of tags in the map */
	asn_MAP_ext3_oms_22,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_22 = {
	"ext3",
	"ext3",
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
	asn_DEF_ext3_tags_22,
	sizeof(asn_DEF_ext3_tags_22)
		/sizeof(asn_DEF_ext3_tags_22[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_22,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_22)
		/sizeof(asn_DEF_ext3_tags_22[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext3_22,
	4,	/* Elements count */
	&asn_SPC_ext3_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext4_29[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasConfig__ext4, measObjectToRemoveListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectToRemoveListExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectToRemoveListExt-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasConfig__ext4, measObjectToAddModListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectToAddModListExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectToAddModListExt-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasConfig__ext4, measIdToAddModList_v1310),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdToAddModList_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measIdToAddModList-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasConfig__ext4, measIdToAddModListExt_v1310),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdToAddModListExt_v1310,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measIdToAddModListExt-v1310"
		},
};
static int asn_MAP_ext4_oms_29[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_ext4_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext4_tag2el_29[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectToRemoveListExt-r13 at 6599 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectToAddModListExt-r13 at 6600 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measIdToAddModList-v1310 at 6601 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measIdToAddModListExt-v1310 at 6602 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext4_specs_29 = {
	sizeof(struct MeasConfig__ext4),
	offsetof(struct MeasConfig__ext4, _asn_ctx),
	asn_MAP_ext4_tag2el_29,
	4,	/* Count of tags in the map */
	asn_MAP_ext4_oms_29,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext4_29 = {
	"ext4",
	"ext4",
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
	asn_DEF_ext4_tags_29,
	sizeof(asn_DEF_ext4_tags_29)
		/sizeof(asn_DEF_ext4_tags_29[0]) - 1, /* 1 */
	asn_DEF_ext4_tags_29,	/* Same as above */
	sizeof(asn_DEF_ext4_tags_29)
		/sizeof(asn_DEF_ext4_tags_29[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext4_29,
	4,	/* Elements count */
	&asn_SPC_ext4_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasConfig_1[] = {
	{ ATF_POINTER, 15, offsetof(struct MeasConfig, measObjectToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectToRemoveList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectToRemoveList"
		},
	{ ATF_POINTER, 14, offsetof(struct MeasConfig, measObjectToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measObjectToAddModList"
		},
	{ ATF_POINTER, 13, offsetof(struct MeasConfig, reportConfigToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportConfigToRemoveList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportConfigToRemoveList"
		},
	{ ATF_POINTER, 12, offsetof(struct MeasConfig, reportConfigToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportConfigToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportConfigToAddModList"
		},
	{ ATF_POINTER, 11, offsetof(struct MeasConfig, measIdToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdToRemoveList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measIdToRemoveList"
		},
	{ ATF_POINTER, 10, offsetof(struct MeasConfig, measIdToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measIdToAddModList"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasConfig, quantityConfig),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"quantityConfig"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasConfig, measGapConfig),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasGapConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measGapConfig"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasConfig, s_Measure),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-Measure"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasConfig, preRegistrationInfoHRPD),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PreRegistrationInfoHRPD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preRegistrationInfoHRPD"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasConfig, speedStatePars),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_speedStatePars_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speedStatePars"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_ext1_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasConfig, ext2),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_ext2_20,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasConfig, ext3),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_ext3_22,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext3"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasConfig, ext4),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		0,
		&asn_DEF_ext4_29,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext4"
		},
};
static int asn_MAP_MeasConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
static ber_tlv_tag_t asn_DEF_MeasConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectToRemoveList at 6565 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectToAddModList at 6566 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportConfigToRemoveList at 6568 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reportConfigToAddModList at 6569 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measIdToRemoveList at 6571 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measIdToAddModList at 6572 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* quantityConfig at 6574 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measGapConfig at 6575 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* s-Measure at 6576 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* preRegistrationInfoHRPD at 6577 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* speedStatePars at 6579 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ext1 at 6586 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ext2 at 6588 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ext3 at 6593 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 } /* ext4 at 6599 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasConfig_specs_1 = {
	sizeof(struct MeasConfig),
	offsetof(struct MeasConfig, _asn_ctx),
	asn_MAP_MeasConfig_tag2el_1,
	15,	/* Count of tags in the map */
	asn_MAP_MeasConfig_oms_1,	/* Optional members */
	11, 4,	/* Root/Additions */
	10,	/* Start extensions */
	16	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasConfig = {
	"MeasConfig",
	"MeasConfig",
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
	asn_DEF_MeasConfig_tags_1,
	sizeof(asn_DEF_MeasConfig_tags_1)
		/sizeof(asn_DEF_MeasConfig_tags_1[0]), /* 1 */
	asn_DEF_MeasConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasConfig_tags_1)
		/sizeof(asn_DEF_MeasConfig_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasConfig_1,
	15,	/* Elements count */
	&asn_SPC_MeasConfig_specs_1	/* Additional specs */
};

