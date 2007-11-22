	.section __TEXT,__text,regular,pure_instructions
	.section __TEXT,__picsymbolstub1,symbol_stubs,pure_instructions,32
	.machine ppc
	.stabs	"/Volumes/Misc/projects/SafariPowerToy/",100,0,51,Ltext0
	.stabs	"/Volumes/Misc/projects/SafariPowerToy/safari3_override.mm",100,0,51,Ltext0
	.text
Ltext0:
	.stabs	"",102,0,0,0
	.stabs	"gcc2_compiled.",60,0,0,0
	.stabs	":t(0,1)=(0,1)",128,0,0,0
	.lazy_reference .objc_class_name_SafariPowerToy
	.objc_cat_cls_meth
	.objc_cat_inst_meth
	.objc_string_object
	.section __OBJC, __cstring_object, regular, no_dead_strip
	.objc_message_refs
	.section __OBJC, __sel_fixup, regular, no_dead_strip
	.objc_cls_refs
	.objc_class
	.objc_meta_class
	.objc_cls_meth
	.objc_inst_meth
	.objc_protocol
	.objc_class_names
	.objc_meth_var_types
	.objc_meth_var_names
	.objc_category
	.objc_class_vars
	.objc_instance_vars
	.objc_module_info
	.objc_symbols
	.objc_meth_var_names
	.align 2
L_OBJC_METH_VAR_NAME_0:
	.ascii "getForGlyph_SafariPowerToy\0"
	.objc_class_names
	.align 2
L_OBJC_CLASS_NAME_1:
	.ascii "SafariPowerToy\0"
	.align 2
L_OBJC_CLASS_NAME_0:
	.ascii "\0"
	.objc_cls_refs
	.align 2
L_OBJC_CLASS_REFERENCES_0:
	.long	L_OBJC_CLASS_NAME_1
	.objc_module_info
	.align 2
L_OBJC_MODULES:
	.long	6
	.long	16
	.long	L_OBJC_CLASS_NAME_0
	.long	L_OBJC_SYMBOLS
	.section __OBJC, __image_info, regular, no_dead_strip
	.align 2
L_OBJC_IMAGE_INFO:
	.long	0
	.long	2
	.objc_message_refs
	.align 2
L_OBJC_SELECTOR_REFERENCES_0:
	.long	L_OBJC_METH_VAR_NAME_0
.lcomm L_OBJC_SYMBOLS,12,2
.lcomm _gReentry_Font_drawSimpleText,4,2
	.data
	.align 2
_ptrFont_drawSimpleText:
	.long	-1779187520
	.text
	.align 2
	.globl __Z12ConvertUCharPti
__Z12ConvertUCharPti:
	.stabd	46,0,0
	.stabd	68,0,18
LFB317:
	nop
	nop
	nop
	nop
	nop
	mflr r0
LCFI0:
	stmw r30,-8(r1)
LCFI1:
	stw r0,8(r1)
LCFI2:
	stwu r1,-96(r1)
LCFI3:
	mr r30,r1
LCFI4:
	bcl 20,31,"L00000000001$pb"
"L00000000001$pb":
	mflr r31
	stw r3,120(r30)
	stw r4,124(r30)
LBB2:
LBB3:
	.stabd	68,0,20
	addis r2,r31,ha16(L_OBJC_CLASS_REFERENCES_0-"L00000000001$pb")
	la r2,lo16(L_OBJC_CLASS_REFERENCES_0-"L00000000001$pb")(r2)
	lwz r0,0(r2)
	mr r9,r0
	addis r2,r31,ha16(L_OBJC_SELECTOR_REFERENCES_0-"L00000000001$pb")
	la r2,lo16(L_OBJC_SELECTOR_REFERENCES_0-"L00000000001$pb")(r2)
	lwz r0,0(r2)
	mr r3,r9
	mr r4,r0
	bla 0xfffeff00
	mr r0,r3
	stw r0,68(r30)
	.stabd	68,0,21
	lwz r0,68(r30)
	cmpwi cr7,r0,0
	bne cr7,L2
	.stabd	68,0,22
	li r0,0
	stw r0,72(r30)
	b L4
L2:
	.stabd	68,0,23
	li r0,0
	stw r0,64(r30)
	.stabd	68,0,25
	li r0,0
	stw r0,60(r30)
	b L5
L6:
	.stabd	68,0,27
	lwz r0,60(r30)
	slwi r0,r0,1
	mr r2,r0
	lwz r0,120(r30)
	add r2,r2,r0
	lhz r0,0(r2)
	rlwinm r0,r0,0,0xffff
	cmplwi cr7,r0,255
	ble cr7,L7
	.stabd	68,0,29
	lwz r0,68(r30)
	cmpwi cr7,r0,1
	bne cr7,L9
	.stabd	68,0,30
	lwz r0,60(r30)
	slwi r0,r0,1
	mr r2,r0
	lwz r0,120(r30)
	add r0,r2,r0
	mr r3,r0
	li r4,2
	bl L_simp2trad_lookup$stub
	mr r0,r3
	stw r0,64(r30)
	b L11
L9:
	.stabd	68,0,32
	lwz r0,60(r30)
	slwi r0,r0,1
	mr r2,r0
	lwz r0,120(r30)
	add r0,r2,r0
	mr r3,r0
	li r4,2
	bl L_trad2simp_lookup$stub
	mr r0,r3
	stw r0,64(r30)
L11:
	.stabd	68,0,33
	lwz r0,64(r30)
	cmpwi cr7,r0,0
	bne cr7,L12
L7:
	.stabd	68,0,25
	lwz r2,60(r30)
	addi r0,r2,1
	stw r0,60(r30)
L5:
	lwz r0,60(r30)
	lwz r2,124(r30)
	cmpw cr7,r0,r2
	blt cr7,L6
L12:
	.stabd	68,0,37
	lwz r0,64(r30)
	cmpwi cr7,r0,0
	bne cr7,L23
	.stabd	68,0,38
	li r0,0
	stw r0,72(r30)
	b L4
L13:
L23:
	.stabd	68,0,42
	lwz r0,64(r30)
	cmpwi cr7,r0,0
	beq cr7,L15
LBB4:
	.stabd	68,0,44
	lwz r2,64(r30)
	lwz r0,4(r2)
	stw r0,56(r30)
	.stabd	68,0,45
	lwz r0,60(r30)
	slwi r0,r0,1
	mr r2,r0
	lwz r0,120(r30)
	add r9,r2,r0
	lwz r2,56(r30)
	lhz r0,0(r2)
	rlwinm r0,r0,0,0xffff
	sth r0,0(r9)
L15:
LBE4:
	.stabd	68,0,47
	li r0,0
	stw r0,64(r30)
	.stabd	68,0,48
	lwz r2,60(r30)
	addi r0,r2,1
	stw r0,60(r30)
	.stabd	68,0,49
	lwz r2,60(r30)
	lwz r0,124(r30)
	cmpw cr7,r2,r0
	bge cr7,L17
	.stabd	68,0,51
	lwz r0,60(r30)
	slwi r0,r0,1
	mr r2,r0
	lwz r0,120(r30)
	add r2,r2,r0
	lhz r0,0(r2)
	rlwinm r0,r0,0,0xffff
	cmplwi cr7,r0,255
	ble cr7,L13
	.stabd	68,0,53
	lwz r0,68(r30)
	cmpwi cr7,r0,1
	bne cr7,L20
	.stabd	68,0,54
	lwz r0,60(r30)
	slwi r0,r0,1
	mr r2,r0
	lwz r0,120(r30)
	add r0,r2,r0
	mr r3,r0
	li r4,2
	bl L_simp2trad_lookup$stub
	mr r0,r3
	stw r0,64(r30)
	b L13
L20:
	.stabd	68,0,56
	lwz r0,60(r30)
	slwi r0,r0,1
	mr r2,r0
	lwz r0,120(r30)
	add r0,r2,r0
	mr r3,r0
	li r4,2
	bl L_trad2simp_lookup$stub
	mr r0,r3
	stw r0,64(r30)
	b L13
L17:
	.stabd	68,0,58
	li r0,1
	stw r0,72(r30)
L4:
	lwz r0,72(r30)
LBE3:
LBE2:
	.stabd	68,0,59
	mr r3,r0
	lwz r1,0(r1)
	lwz r0,8(r1)
	mtlr r0
	lmw r30,-8(r1)
	blr
LFE317:
	.stabs	"_Z12ConvertUCharPti:F(0,2)",36,0,18,__Z12ConvertUCharPti
	.stabs	"buf:p(0,4)",160,0,18,120
	.stabs	"nLen:p(0,5)",160,0,18,124
	.stabs	"glyph_status:(0,6)=xeGlyph_E:",128,0,20,68
	.stabs	"Glyph_E:t(0,6)=eeOriginal:0,eTraditional:1,eSimplified:2,;",128,0,23,0
	.stabs	"signed char:t(0,3)=@s8;r(0,3);-128;127;",128,0,0,0
	.stabs	"BOOL:t(0,2)=(0,3)",128,0,0,0
	.stabs	":t(0,4)=*(0,7)",128,0,0,0
	.stabs	"int:t(0,5)=r(0,5);-2147483648;2147483647;",128,0,0,0
	.stabs	"UChar:t(0,7)=(0,8)",128,0,0,0
	.stabs	"short unsigned int:t(0,8)=@s16;r(0,8);0;65535;",128,0,0,0
	.stabs	"ch_map:(0,9)",128,0,23,64
	.stabs	"i:(0,5)",128,0,24,60
	.stabs	"int:t(0,5)",128,0,0,0
	.stabs	":t(0,9)=*(0,10)",128,0,0,0
	.stabs	":t(0,10)=k(0,11)",128,0,0,0
	.stabs	"char_map_s:t(0,11)=s8src:(0,12),0,32;dst:(0,12),32,32;;",128,0,0,0
	.stabs	":t(0,12)=*(0,13)",128,0,0,0
	.stabs	"char:t(0,13)=r(0,13);0;127;",128,0,0,0
	.stabn	192,0,0,LBB3
	.stabs	"ch:(0,14)",128,0,44,56
	.stabs	"char_map_s:Tt(0,11)",128,0,8,0
	.stabs	"UChar:t(0,7)",128,0,15,0
	.stabs	":t(0,14)=*(0,15)",128,0,0,0
	.stabs	":t(0,15)=k(0,7)",128,0,0,0
	.stabn	192,0,0,LBB4
	.stabn	224,0,0,LBE4
	.stabn	224,0,0,LBE3
Lscope0:
	.stabs	"",36,0,0,Lscope0-__Z12ConvertUCharPti
	.stabd	78,0,0
	.align 2
	.globl __Z19Font_drawSimpleTextPvS_S_S_ii
__Z19Font_drawSimpleTextPvS_S_S_ii:
	.stabd	46,0,0
	.stabd	68,0,79
LFB318:
	nop
	nop
	nop
	nop
	nop
	mflr r0
LCFI5:
	stmw r30,-8(r1)
LCFI6:
	stw r0,8(r1)
LCFI7:
	stwu r1,-128(r1)
LCFI8:
	mr r30,r1
LCFI9:
	bcl 20,31,"L00000000002$pb"
"L00000000002$pb":
	mflr r31
	stw r3,152(r30)
	stw r4,156(r30)
	stw r5,160(r30)
	stw r6,164(r30)
	stw r7,168(r30)
	stw r8,172(r30)
	.stabd	68,0,79
	mr r0,r1
	stw r0,88(r30)
LBB5:
LBB6:
	.stabd	68,0,81
	lwz r0,160(r30)
	stw r0,60(r30)
	.stabd	68,0,82
	lwz r2,60(r30)
	lwz r0,4(r2)
	stw r0,56(r30)
	.stabd	68,0,83
	lwz r2,56(r30)
	addi r0,r2,-1
	slwi r2,r0,1
	addi r2,r2,2
	addi r2,r2,15
	addi r0,r2,15
	srwi r0,r0,4
	slwi r0,r0,4
	lwz r2,0(r1)
	neg r0,r0
	stwux r2,r1,r0
	addi r2,r1,56
	stw r2,92(r30)
	lwz r2,92(r30)
	addi r0,r2,15
	srwi r0,r0,4
	slwi r0,r0,4
	stw r0,92(r30)
	lwz r2,92(r30)
	stw r2,64(r30)
	.stabd	68,0,84
	lwz r9,64(r30)
	lwz r2,60(r30)
	lwz r11,0(r2)
	lwz r0,56(r30)
	slwi r0,r0,1
	mr r2,r9
	mr r9,r11
	mr r3,r2
	mr r4,r9
	mr r5,r0
	bl L_memcpy$stub
	.stabd	68,0,85
	lwz r0,64(r30)
	mr r3,r0
	lwz r4,56(r30)
LEHB0:
	bl __Z12ConvertUCharPti
	.stabd	68,0,87
	lwz r0,64(r30)
	stw r0,68(r30)
	.stabd	68,0,88
	lwz r0,56(r30)
	stw r0,72(r30)
	.stabd	68,0,89
	addis r2,r31,ha16(L_gReentry_Font_drawSimpleText$non_lazy_ptr-"L00000000002$pb")
	lwz r2,lo16(L_gReentry_Font_drawSimpleText$non_lazy_ptr-"L00000000002$pb")(r2)
	lwz r2,0(r2)
	addi r0,r30,68
	lwz r3,152(r30)
	lwz r4,156(r30)
	mr r5,r0
	lwz r6,164(r30)
	lwz r7,168(r30)
	lwz r8,172(r30)
	mr r12,r2
	mtctr r12
	bctrl
LEHE0:
	b L25
L28:
	stw r3,96(r30)
L26:
	lwz r2,96(r30)
	lwz r0,0(r1)
	lwz r1,88(r30)
	stw r0,0(r1)
	stw r2,96(r30)
	lwz r3,96(r30)
LEHB1:
	bl L__Unwind_Resume$stub
LEHE1:
L25:
	lwz r0,0(r1)
	lwz r1,88(r30)
	stw r0,0(r1)
LBE6:
LBE5:
	.stabd	68,0,90
	lwz r1,0(r1)
	lwz r0,8(r1)
	mtlr r0
	lmw r30,-8(r1)
	blr
LFE318:
	.section __DATA,__gcc_except_tab
GCC_except_table0:
LLSDA318:
	.byte	0xff
	.byte	0xff
	.byte	0x3
	.byte	0x1a
	.set L$set$0,LEHB0-LFB318
	.long L$set$0
	.set L$set$1,LEHE0-LEHB0
	.long L$set$1
	.set L$set$2,L28-LFB318
	.long L$set$2
	.byte	0x0
	.set L$set$3,LEHB1-LFB318
	.long L$set$3
	.set L$set$4,LEHE1-LEHB1
	.long L$set$4
	.long	0x0
	.byte	0x0
	.text
	.stabs	"_Z19Font_drawSimpleTextPvS_S_S_ii:F(0,1)",36,0,79,__Z19Font_drawSimpleTextPvS_S_S_ii
	.stabs	"font:p(0,16)",160,0,79,152
	.stabs	"context:p(0,16)",160,0,79,156
	.stabs	"run:p(0,16)",160,0,79,160
	.stabs	"point:p(0,16)",160,0,79,164
	.stabs	"from:p(0,5)",160,0,79,168
	.stabs	"to:p(0,5)",160,0,79,172
	.stabs	"text_run:(0,17)",128,0,81,60
	.stabs	"TextRun:Tt(0,18)=s8m_characters:(0,4),0,32;m_len:(0,5),32,32;;",128,0,63,0
	.stabs	":t(0,16)=*(0,1)",128,0,0,0
	.stabs	":t(0,17)=*(0,18)",128,0,0,0
	.stabs	"len:(0,5)",128,0,82,56
	.stabs	"new_run:(0,18)",128,0,86,68
	.stabn	192,0,0,LBB6
	.stabn	224,0,0,LBE6
Lscope1:
	.stabs	"",36,0,0,Lscope1-__Z19Font_drawSimpleTextPvS_S_S_ii
	.stabd	78,0,0
	.align 2
	.globl _Safari3_Override
_Safari3_Override:
	.stabd	46,0,0
	.stabd	68,0,92
LFB319:
	nop
	nop
	nop
	nop
	nop
	mflr r0
LCFI10:
	stmw r30,-8(r1)
LCFI11:
	stw r0,8(r1)
LCFI12:
	stwu r1,-96(r1)
LCFI13:
	mr r30,r1
LCFI14:
	bcl 20,31,"L00000000003$pb"
"L00000000003$pb":
	mflr r31
LBB7:
LBB8:
	.stabd	68,0,102
	addis r2,r31,ha16(L_ptrFont_drawSimpleText$non_lazy_ptr-"L00000000003$pb")
	lwz r2,lo16(L_ptrFont_drawSimpleText$non_lazy_ptr-"L00000000003$pb")(r2)
	lwz r0,0(r2)
	addis r2,r31,ha16(L_gReentry_Font_drawSimpleText$non_lazy_ptr-"L00000000003$pb")
	lwz r9,lo16(L_gReentry_Font_drawSimpleText$non_lazy_ptr-"L00000000003$pb")(r2)
	mr r3,r0
	addis r2,r31,ha16(L__Z19Font_drawSimpleTextPvS_S_S_ii$non_lazy_ptr-"L00000000003$pb")
	lwz r4,lo16(L__Z19Font_drawSimpleTextPvS_S_S_ii$non_lazy_ptr-"L00000000003$pb")(r2)
	mr r5,r9
	bl L_mach_override_ptr$stub
	mr r0,r3
	stw r0,56(r30)
	.stabd	68,0,103
	lwz r0,56(r30)
LBE8:
LBE7:
	.stabd	68,0,104
	mr r3,r0
	lwz r1,0(r1)
	lwz r0,8(r1)
	mtlr r0
	lmw r30,-8(r1)
	blr
LFE319:
	.stabs	"Safari3_Override:F(0,5)",36,0,92,_Safari3_Override
	.stabs	"err:(0,19)",128,0,100,56
	.stabs	"kern_return_t:t(0,19)=(0,5)",128,0,65,0
	.stabn	192,0,0,LBB8
	.stabn	224,0,0,LBE8
Lscope2:
	.stabs	"",36,0,0,Lscope2-_Safari3_Override
	.stabd	78,0,0
	.stabs	"ptrFont_drawSimpleText:S(0,16)",38,0,74,_ptrFont_drawSimpleText
	.stabs	"void:t(0,1)",128,0,0,0
	.stabs	"gReentry_Font_drawSimpleText:S(0,20)",38,0,77,_gReentry_Font_drawSimpleText
	.stabs	"_OBJC_METH_VAR_NAME_0:S(0,22)",38,0,104,L_OBJC_METH_VAR_NAME_0
	.stabs	"_OBJC_CLASS_NAME_0:S(0,23)",38,0,104,L_OBJC_CLASS_NAME_0
	.stabs	"_OBJC_CLASS_NAME_1:S(0,24)",38,0,104,L_OBJC_CLASS_NAME_1
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$5,LECIE1-LSCIE1
	.long L$set$5
LSCIE1:
	.long	0x0
	.byte	0x1
	.ascii "zPLR\0"
	.byte	0x1
	.byte	0x7c
	.byte	0x41
	.byte	0x7
	.byte	0x9b
	.long	L___gxx_personality_v0$non_lazy_ptr-.
	.byte	0x10
	.byte	0x10
	.byte	0xc
	.byte	0x1
	.byte	0x0
	.align 2
LECIE1:
	.globl __Z12ConvertUCharPti.eh
__Z12ConvertUCharPti.eh:
LSFDE1:
	.set L$set$6,LEFDE1-LASFDE1
	.long L$set$6
LASFDE1:
	.long	LASFDE1-EH_frame1
	.long	LFB317-.
	.set L$set$7,LFE317-LFB317
	.long L$set$7
	.byte	0x4
	.long	0x0
	.byte	0x4
	.set L$set$8,LCFI3-LFB317
	.long L$set$8
	.byte	0xe
	.byte	0x60
	.byte	0x9f
	.byte	0x1
	.byte	0x9e
	.byte	0x2
	.byte	0x11
	.byte	0x41
	.byte	0x7e
	.byte	0x4
	.set L$set$9,LCFI4-LCFI3
	.long L$set$9
	.byte	0xd
	.byte	0x1e
	.align 2
LEFDE1:
	.globl __Z19Font_drawSimpleTextPvS_S_S_ii.eh
__Z19Font_drawSimpleTextPvS_S_S_ii.eh:
LSFDE3:
	.set L$set$10,LEFDE3-LASFDE3
	.long L$set$10
LASFDE3:
	.long	LASFDE3-EH_frame1
	.long	LFB318-.
	.set L$set$11,LFE318-LFB318
	.long L$set$11
	.byte	0x4
	.long	LLSDA318-.
	.byte	0x4
	.set L$set$12,LCFI8-LFB318
	.long L$set$12
	.byte	0xe
	.byte	0x80,0x1
	.byte	0x9f
	.byte	0x1
	.byte	0x9e
	.byte	0x2
	.byte	0x11
	.byte	0x41
	.byte	0x7e
	.byte	0x4
	.set L$set$13,LCFI9-LCFI8
	.long L$set$13
	.byte	0xd
	.byte	0x1e
	.align 2
LEFDE3:
	.globl _Safari3_Override.eh
_Safari3_Override.eh:
LSFDE5:
	.set L$set$14,LEFDE5-LASFDE5
	.long L$set$14
LASFDE5:
	.long	LASFDE5-EH_frame1
	.long	LFB319-.
	.set L$set$15,LFE319-LFB319
	.long L$set$15
	.byte	0x4
	.long	0x0
	.byte	0x4
	.set L$set$16,LCFI13-LFB319
	.long L$set$16
	.byte	0xe
	.byte	0x60
	.byte	0x9f
	.byte	0x1
	.byte	0x9e
	.byte	0x2
	.byte	0x11
	.byte	0x41
	.byte	0x7e
	.byte	0x4
	.set L$set$17,LCFI14-LCFI13
	.long L$set$17
	.byte	0xd
	.byte	0x1e
	.align 2
LEFDE5:
	.stabs	":t(0,21)=*(0,25)",128,0,0,0
	.stabs	"Font_drawSimpleText_Proc:t(0,20)=(0,21)",128,0,0,0
	.stabs	":t(0,22)=ar(0,26);0;26;(0,13)",128,0,0,0
	.stabs	":t(0,23)=ar(0,26);0;0;(0,13)",128,0,0,0
	.stabs	":t(0,24)=ar(0,26);0;14;(0,13)",128,0,0,0
	.stabs	":t(0,25)=f(0,1)",128,0,0,0
	.stabs	"long unsigned int:t(0,26)=r(0,26);0;037777777777;",128,0,0,0
	.text
	.stabs	"",100,0,0,Letext0
Letext0:
	.section __TEXT,__picsymbolstub1,symbol_stubs,pure_instructions,32
	.align 5
L_mach_override_ptr$stub:
	.indirect_symbol _mach_override_ptr
	mflr r0
	bcl 20,31,"L00000000001$spb"
"L00000000001$spb":
	mflr r11
	addis r11,r11,ha16(L_mach_override_ptr$lazy_ptr-"L00000000001$spb")
	mtlr r0
	lwzu r12,lo16(L_mach_override_ptr$lazy_ptr-"L00000000001$spb")(r11)
	mtctr r12
	bctr
	.lazy_symbol_pointer
L_mach_override_ptr$lazy_ptr:
	.indirect_symbol _mach_override_ptr
	.long	dyld_stub_binding_helper
	.non_lazy_symbol_pointer
L_ptrFont_drawSimpleText$non_lazy_ptr:
	.indirect_symbol _ptrFont_drawSimpleText
	.long	_ptrFont_drawSimpleText
	.section __TEXT,__picsymbolstub1,symbol_stubs,pure_instructions,32
	.align 5
L_memcpy$stub:
	.indirect_symbol _memcpy
	mflr r0
	bcl 20,31,"L00000000002$spb"
"L00000000002$spb":
	mflr r11
	addis r11,r11,ha16(L_memcpy$lazy_ptr-"L00000000002$spb")
	mtlr r0
	lwzu r12,lo16(L_memcpy$lazy_ptr-"L00000000002$spb")(r11)
	mtctr r12
	bctr
	.lazy_symbol_pointer
L_memcpy$lazy_ptr:
	.indirect_symbol _memcpy
	.long	dyld_stub_binding_helper
	.non_lazy_symbol_pointer
L_gReentry_Font_drawSimpleText$non_lazy_ptr:
	.indirect_symbol _gReentry_Font_drawSimpleText
	.long	_gReentry_Font_drawSimpleText
	.section __TEXT,__picsymbolstub1,symbol_stubs,pure_instructions,32
	.align 5
L__Unwind_Resume$stub:
	.indirect_symbol __Unwind_Resume
	mflr r0
	bcl 20,31,"L00000000003$spb"
"L00000000003$spb":
	mflr r11
	addis r11,r11,ha16(L__Unwind_Resume$lazy_ptr-"L00000000003$spb")
	mtlr r0
	lwzu r12,lo16(L__Unwind_Resume$lazy_ptr-"L00000000003$spb")(r11)
	mtctr r12
	bctr
	.lazy_symbol_pointer
L__Unwind_Resume$lazy_ptr:
	.indirect_symbol __Unwind_Resume
	.long	dyld_stub_binding_helper
	.non_lazy_symbol_pointer
L___gxx_personality_v0$non_lazy_ptr:
	.indirect_symbol ___gxx_personality_v0
	.long	0
	.section __TEXT,__picsymbolstub1,symbol_stubs,pure_instructions,32
	.align 5
L_trad2simp_lookup$stub:
	.indirect_symbol _trad2simp_lookup
	mflr r0
	bcl 20,31,"L00000000004$spb"
"L00000000004$spb":
	mflr r11
	addis r11,r11,ha16(L_trad2simp_lookup$lazy_ptr-"L00000000004$spb")
	mtlr r0
	lwzu r12,lo16(L_trad2simp_lookup$lazy_ptr-"L00000000004$spb")(r11)
	mtctr r12
	bctr
	.lazy_symbol_pointer
L_trad2simp_lookup$lazy_ptr:
	.indirect_symbol _trad2simp_lookup
	.long	dyld_stub_binding_helper
	.section __TEXT,__picsymbolstub1,symbol_stubs,pure_instructions,32
	.align 5
L_simp2trad_lookup$stub:
	.indirect_symbol _simp2trad_lookup
	mflr r0
	bcl 20,31,"L00000000005$spb"
"L00000000005$spb":
	mflr r11
	addis r11,r11,ha16(L_simp2trad_lookup$lazy_ptr-"L00000000005$spb")
	mtlr r0
	lwzu r12,lo16(L_simp2trad_lookup$lazy_ptr-"L00000000005$spb")(r11)
	mtctr r12
	bctr
	.lazy_symbol_pointer
L_simp2trad_lookup$lazy_ptr:
	.indirect_symbol _simp2trad_lookup
	.long	dyld_stub_binding_helper
	.non_lazy_symbol_pointer
L__Z19Font_drawSimpleTextPvS_S_S_ii$non_lazy_ptr:
	.indirect_symbol __Z19Font_drawSimpleTextPvS_S_S_ii
	.long	0
	.constructor
	.destructor
	.align 1
	.subsections_via_symbols
