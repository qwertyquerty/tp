lbl_801949EC:
/* 801949EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801949F0  7C 08 02 A6 */	mflr r0
/* 801949F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801949F8  39 61 00 20 */	addi r11, r1, 0x20
/* 801949FC  48 1C D7 D5 */	bl _savegpr_26
/* 80194A00  7C 7E 1B 79 */	or. r30, r3, r3
/* 80194A04  7C 9F 23 78 */	mr r31, r4
/* 80194A08  41 82 02 0C */	beq lbl_80194C14
/* 80194A0C  3C 60 80 3C */	lis r3, __vt__16dSelect_cursor_c@ha /* 0x803BB78C@ha */
/* 80194A10  38 03 B7 8C */	addi r0, r3, __vt__16dSelect_cursor_c@l /* 0x803BB78C@l */
/* 80194A14  90 1E 00 00 */	stw r0, 0(r30)
/* 80194A18  80 7E 00 04 */	lwz r3, 4(r30)
/* 80194A1C  28 03 00 00 */	cmplwi r3, 0
/* 80194A20  41 82 00 18 */	beq lbl_80194A38
/* 80194A24  38 80 00 01 */	li r4, 1
/* 80194A28  81 83 00 00 */	lwz r12, 0(r3)
/* 80194A2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194A30  7D 89 03 A6 */	mtctr r12
/* 80194A34  4E 80 04 21 */	bctrl 
lbl_80194A38:
/* 80194A38  38 00 00 00 */	li r0, 0
/* 80194A3C  90 1E 00 04 */	stw r0, 4(r30)
/* 80194A40  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80194A44  28 03 00 00 */	cmplwi r3, 0
/* 80194A48  41 82 00 24 */	beq lbl_80194A6C
/* 80194A4C  41 82 00 18 */	beq lbl_80194A64
/* 80194A50  38 80 00 01 */	li r4, 1
/* 80194A54  81 83 00 00 */	lwz r12, 0(r3)
/* 80194A58  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194A5C  7D 89 03 A6 */	mtctr r12
/* 80194A60  4E 80 04 21 */	bctrl 
lbl_80194A64:
/* 80194A64  38 00 00 00 */	li r0, 0
/* 80194A68  90 1E 00 10 */	stw r0, 0x10(r30)
lbl_80194A6C:
/* 80194A6C  3B 40 00 00 */	li r26, 0
/* 80194A70  3B A0 00 00 */	li r29, 0
/* 80194A74  7F BC EB 78 */	mr r28, r29
lbl_80194A78:
/* 80194A78  3B 7D 00 1C */	addi r27, r29, 0x1c
/* 80194A7C  7C 7E D8 2E */	lwzx r3, r30, r27
/* 80194A80  28 03 00 00 */	cmplwi r3, 0
/* 80194A84  41 82 00 20 */	beq lbl_80194AA4
/* 80194A88  41 82 00 18 */	beq lbl_80194AA0
/* 80194A8C  38 80 00 01 */	li r4, 1
/* 80194A90  81 83 00 00 */	lwz r12, 0(r3)
/* 80194A94  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194A98  7D 89 03 A6 */	mtctr r12
/* 80194A9C  4E 80 04 21 */	bctrl 
lbl_80194AA0:
/* 80194AA0  7F 9E D9 2E */	stwx r28, r30, r27
lbl_80194AA4:
/* 80194AA4  3B 5A 00 01 */	addi r26, r26, 1
/* 80194AA8  2C 1A 00 04 */	cmpwi r26, 4
/* 80194AAC  3B BD 00 04 */	addi r29, r29, 4
/* 80194AB0  41 80 FF C8 */	blt lbl_80194A78
/* 80194AB4  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80194AB8  28 03 00 00 */	cmplwi r3, 0
/* 80194ABC  41 82 00 24 */	beq lbl_80194AE0
/* 80194AC0  41 82 00 18 */	beq lbl_80194AD8
/* 80194AC4  38 80 00 01 */	li r4, 1
/* 80194AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80194ACC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194AD0  7D 89 03 A6 */	mtctr r12
/* 80194AD4  4E 80 04 21 */	bctrl 
lbl_80194AD8:
/* 80194AD8  38 00 00 00 */	li r0, 0
/* 80194ADC  90 1E 00 14 */	stw r0, 0x14(r30)
lbl_80194AE0:
/* 80194AE0  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80194AE4  28 03 00 00 */	cmplwi r3, 0
/* 80194AE8  41 82 00 24 */	beq lbl_80194B0C
/* 80194AEC  41 82 00 18 */	beq lbl_80194B04
/* 80194AF0  38 80 00 01 */	li r4, 1
/* 80194AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80194AF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194AFC  7D 89 03 A6 */	mtctr r12
/* 80194B00  4E 80 04 21 */	bctrl 
lbl_80194B04:
/* 80194B04  38 00 00 00 */	li r0, 0
/* 80194B08  90 1E 00 18 */	stw r0, 0x18(r30)
lbl_80194B0C:
/* 80194B0C  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80194B10  28 03 00 00 */	cmplwi r3, 0
/* 80194B14  41 82 00 24 */	beq lbl_80194B38
/* 80194B18  41 82 00 18 */	beq lbl_80194B30
/* 80194B1C  38 80 00 01 */	li r4, 1
/* 80194B20  81 83 00 00 */	lwz r12, 0(r3)
/* 80194B24  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194B28  7D 89 03 A6 */	mtctr r12
/* 80194B2C  4E 80 04 21 */	bctrl 
lbl_80194B30:
/* 80194B30  38 00 00 00 */	li r0, 0
/* 80194B34  90 1E 00 0C */	stw r0, 0xc(r30)
lbl_80194B38:
/* 80194B38  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80194B3C  28 03 00 00 */	cmplwi r3, 0
/* 80194B40  41 82 00 24 */	beq lbl_80194B64
/* 80194B44  41 82 00 18 */	beq lbl_80194B5C
/* 80194B48  38 80 00 01 */	li r4, 1
/* 80194B4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80194B50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194B54  7D 89 03 A6 */	mtctr r12
/* 80194B58  4E 80 04 21 */	bctrl 
lbl_80194B5C:
/* 80194B5C  38 00 00 00 */	li r0, 0
/* 80194B60  90 1E 00 30 */	stw r0, 0x30(r30)
lbl_80194B64:
/* 80194B64  3B 40 00 00 */	li r26, 0
/* 80194B68  3B A0 00 00 */	li r29, 0
/* 80194B6C  3B 80 00 00 */	li r28, 0
lbl_80194B70:
/* 80194B70  3B 7D 00 34 */	addi r27, r29, 0x34
/* 80194B74  7C 7E D8 2E */	lwzx r3, r30, r27
/* 80194B78  28 03 00 00 */	cmplwi r3, 0
/* 80194B7C  41 82 00 20 */	beq lbl_80194B9C
/* 80194B80  41 82 00 18 */	beq lbl_80194B98
/* 80194B84  38 80 00 01 */	li r4, 1
/* 80194B88  81 83 00 00 */	lwz r12, 0(r3)
/* 80194B8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194B90  7D 89 03 A6 */	mtctr r12
/* 80194B94  4E 80 04 21 */	bctrl 
lbl_80194B98:
/* 80194B98  7F 9E D9 2E */	stwx r28, r30, r27
lbl_80194B9C:
/* 80194B9C  3B 5A 00 01 */	addi r26, r26, 1
/* 80194BA0  2C 1A 00 02 */	cmpwi r26, 2
/* 80194BA4  3B BD 00 04 */	addi r29, r29, 4
/* 80194BA8  41 80 FF C8 */	blt lbl_80194B70
/* 80194BAC  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80194BB0  28 03 00 00 */	cmplwi r3, 0
/* 80194BB4  41 82 00 24 */	beq lbl_80194BD8
/* 80194BB8  41 82 00 18 */	beq lbl_80194BD0
/* 80194BBC  38 80 00 01 */	li r4, 1
/* 80194BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80194BC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194BC8  7D 89 03 A6 */	mtctr r12
/* 80194BCC  4E 80 04 21 */	bctrl 
lbl_80194BD0:
/* 80194BD0  38 00 00 00 */	li r0, 0
/* 80194BD4  90 1E 00 2C */	stw r0, 0x2c(r30)
lbl_80194BD8:
/* 80194BD8  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 80194BDC  28 03 00 00 */	cmplwi r3, 0
/* 80194BE0  41 82 00 24 */	beq lbl_80194C04
/* 80194BE4  41 82 00 18 */	beq lbl_80194BFC
/* 80194BE8  38 80 00 01 */	li r4, 1
/* 80194BEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80194BF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194BF4  7D 89 03 A6 */	mtctr r12
/* 80194BF8  4E 80 04 21 */	bctrl 
lbl_80194BFC:
/* 80194BFC  38 00 00 00 */	li r0, 0
/* 80194C00  90 1E 00 3C */	stw r0, 0x3c(r30)
lbl_80194C04:
/* 80194C04  7F E0 07 35 */	extsh. r0, r31
/* 80194C08  40 81 00 0C */	ble lbl_80194C14
/* 80194C0C  7F C3 F3 78 */	mr r3, r30
/* 80194C10  48 13 A1 2D */	bl __dl__FPv
lbl_80194C14:
/* 80194C14  7F C3 F3 78 */	mr r3, r30
/* 80194C18  39 61 00 20 */	addi r11, r1, 0x20
/* 80194C1C  48 1C D6 01 */	bl _restgpr_26
/* 80194C20  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80194C24  7C 08 03 A6 */	mtlr r0
/* 80194C28  38 21 00 20 */	addi r1, r1, 0x20
/* 80194C2C  4E 80 00 20 */	blr 
