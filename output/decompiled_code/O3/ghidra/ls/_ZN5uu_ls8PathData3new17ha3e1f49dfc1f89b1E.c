/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0022d327) overlaps instruction at (ram,0x0022d326)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

qword * __rustcall
uu_ls::PathData::new
          (uint ****param_1,qword *param_2,code *param_3,uint ****param_4,ulong param_5,
          ulong param_6,byte param_7)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 ****ppppuVar6;
  undefined uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  qword *pqVar11;
  undefined8 uVar12;
  qword *pqVar13;
  ulong uVar14;
  uint *UNRECOVERED_JUMPTABLE;
  uint *UNRECOVERED_JUMPTABLE_00;
  ulong extraout_RDX;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  uint ****ppppuVar19;
  ulong uVar20;
  uint ****unaff_R14;
  uint ***pppuVar21;
  undefined2 in_FS;
  bool bVar22;
  bool bVar23;
  longdouble in_ST0;
  undefined auVar24 [16];
  char in_stack_00000038;
  uint uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  uint ****local_148;
  undefined8 uStack_140;
  uint ****local_138;
  uint ***pppuStack_130;
  qword *local_128;
  code *local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  uint ***local_f8;
  undefined8 ****local_e8;
  uint ***pppuStack_e0;
  qword *local_d8;
  code *pcStack_d0;
  long local_c8;
  long lStack_b8;
  uint local_b0 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  uint **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar15 = &uStack_158;
  uVar20 = param_6 & 0xffffffff;
  uVar17 = param_5 & 0xffffffff;
  uStack_140 = (code *)CONCAT44((int)param_5,(undefined4)uStack_140);
  pqVar13 = param_2;
  local_148 = param_4;
  local_120 = param_3;
  if (*param_4 != (uint ***)0x8000000000000000) {
    local_128 = (qword *)param_4[2];
    local_138 = (uint ****)*param_4;
    pppuStack_130 = param_4[1];
    pqVar11 = (qword *)0x0;
    uVar17 = 0;
    UNRECOVERED_JUMPTABLE_00 = &switchD_00226af9::switchdataD_001346b0;
    UNRECOVERED_JUMPTABLE =
         (uint *)((long)&switchD_00226af9::switchdataD_001346b0 +
                 (long)(int)(&switchD_00226af9::switchdataD_001346b0)[param_6 & 0xff]);
    bVar23 = false;
    uVar20 = 0;
    uVar10 = 0;
    bVar22 = true;
    ppppuVar19 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_6 & 0xff) {
    case 0:
      goto switchD_00226af9_caseD_0;
    case 1:
switchD_00226af9_caseD_1:
      pqVar11 = (qword *)0x0;
      uVar10 = (uint)uVar20;
      if (param_7 == 0) {
        uVar17 = 0;
        goto switchD_00226af9_caseD_0;
      }
      break;
    case 2:
      goto switchD_00226a60_caseD_226b63;
    case 3:
      goto switchD_00226a60_caseD_226b5b;
    case 4:
      goto switchD_00226af9_caseD_4;
    case 5:
      goto switchD_00226af9_caseD_5;
    case 6:
switchD_00226af9_caseD_6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
switchD_00226af9_caseD_7:
      *(byte *)pqVar11 = *(byte *)pqVar11 + (char)pqVar11;
      break;
    case 8:
switchD_00226af9_caseD_8:
      return pqVar11;
    case 9:
switchD_00226af9_caseD_9:
      pqVar11 = (qword *)(ulong)UNK_001347a9;
      goto switchD_00226a60_caseD_227bdb;
    case 10:
switchD_00226af9_caseD_a:
      uVar17 = 0;
      UNRECOVERED_JUMPTABLE_00 = &switchD_00226af9::switchdataD_001346b0;
      out(0,(int)pqVar11);
      *(byte *)pqVar11 = *(byte *)pqVar11 + (char)pqVar11;
      goto switchD_00226a60_caseD_227bf2;
    case 0xb:
switchD_00226af9_caseD_b:
      uVar17 = 0;
      UNRECOVERED_JUMPTABLE_00 = &switchD_00226af9::switchdataD_001346b0;
      bVar22 = CARRY1(*(byte *)pqVar11,(byte)pqVar11);
      *(byte *)pqVar11 = *(byte *)pqVar11 + (byte)pqVar11;
      goto switchD_00226a60_caseD_227c09;
    case 0xc:
      goto switchD_00226af9_caseD_c;
    case 0xd:
switchD_00226af9_caseD_d:
      uVar17 = 0;
      pqVar11 = (qword *)::alloc::slice::_<impl[T]>::sort_by_key();
      if (param_3[0xe7] == (code)0x0) goto LAB_00227c70;
LAB_00227c65:
      pqVar11 = (qword *)core::slice::_<impl[T]>::reverse(param_4,param_2);
      goto LAB_00227c70;
    case 0xe:
      goto switchD_00226af9_caseD_e;
    case 0xf:
      goto switchD_00226af9_caseD_f;
    case 0x10:
switchD_00226af9_caseD_10:
      *(byte *)pqVar11 = *(byte *)pqVar11 + (char)pqVar11;
      cRam0000000000229576 = cRam0000000000229576 + (char)pqVar11;
      uVar10 = (uint)pqVar11 << 0x13 | (uint)pqVar11 >> 0xd;
      if (uVar10 < 5) {
        UNRECOVERED_JUMPTABLE = &switchD_0022b590::switchdataD_001346ec;
        uVar17 = (ulong)(int)(&switchD_0022b590::switchdataD_001346ec)[uVar10];
        goto code_r0x0022b58d;
      }
      pppuStack_78 = (undefined8 ***)&DAT_0013624f;
      uStack_70 = 1;
      bVar22 = 1 < *(ulong *)(lStack_b8 + 0x40);
      pppuStack_98 = (undefined8 ***)0x1;
      if (bVar22) {
        pppuStack_98 = (undefined8 ***)&DAT_00134771;
      }
      uStack_90 = (ulong)bVar22;
      pad_left(&local_108,&DAT_0013623a,1,_DAT_00000008);
      local_148 = (uint ****)&pppuStack_78;
      uStack_140 = _<&T_as_core::fmt::Display>::fmt;
      local_138 = (uint ****)&pppuStack_98;
      pppuStack_130 = (uint ***)_<&T_as_core::fmt::Display>::fmt;
      local_120 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_e8 = (undefined8 ****)&DAT_00312728;
      pppuStack_e0 = (uint ***)0x3;
      local_c8 = 0;
      local_d8 = (qword *)&local_148;
      pcStack_d0 = (code *)0x3;
      local_128 = &local_108;
      uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (local_b0,&local_e8);
      core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_00312878);
      core::ptr::drop_in_place<alloc::string::String>(&local_108);
      if (*(byte *)((long)param_4 + 0xe2) != 0) {
        pad_right(&local_e8,&DAT_0013623a,1,_DAT_00000010);
        uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_148 = (uint ****)&PTR_DAT_003126d8;
        uStack_140 = (code *)0x1;
        local_128 = (undefined8 *)0x0;
        pppuStack_130 = (uint ***)0x1;
        local_138 = (uint ****)&local_108;
        local_108 = (uint ****)&local_e8;
        uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                          (local_b0,&local_148);
        core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_00312890);
        core::ptr::drop_in_place<alloc::string::String>(&local_e8);
      }
      if (*(byte *)((long)param_4 + 0xe1) != 0) {
        pad_right(&local_e8,&DAT_0013623a,1,_DAT_00000018);
        uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_148 = (uint ****)&PTR_DAT_003126d8;
        uStack_140 = (code *)0x1;
        local_128 = (undefined8 *)0x0;
        pppuStack_130 = (uint ***)0x1;
        local_138 = (uint ****)&local_108;
        local_108 = (uint ****)&local_e8;
        uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                          (local_b0,&local_148);
        core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_003128a8);
        core::ptr::drop_in_place<alloc::string::String>(&local_e8);
      }
      if (*(byte *)((long)param_4 + 0xeb) != 0) {
        pad_right(&local_e8,*(undefined8 *)(lStack_b8 + 0x38),*(undefined8 *)(lStack_b8 + 0x40),
                  _DAT_00000020);
        uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_148 = (uint ****)&PTR_DAT_003126d8;
        uStack_140 = (code *)0x1;
        local_128 = (undefined8 *)0x0;
        pppuStack_130 = (uint ***)0x1;
        local_138 = (uint ****)&local_108;
        local_108 = (uint ****)&local_e8;
        uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                          (local_b0,&local_148);
        core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_003128c0);
        core::ptr::drop_in_place<alloc::string::String>(&local_e8);
      }
      if (*(byte *)(param_4 + 0x1c) != 0) {
        pad_right(&local_e8,&DAT_0013623a,1,_DAT_00000010);
        uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_148 = (uint ****)&PTR_DAT_003126d8;
        uStack_140 = (code *)0x1;
        local_128 = (undefined8 *)0x0;
        pppuStack_130 = (uint ***)0x1;
        local_138 = (uint ****)&local_108;
        local_108 = (uint ****)&local_e8;
        uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                          (local_b0,&local_148);
        core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_003128d8);
        core::ptr::drop_in_place<alloc::string::String>(&local_e8);
      }
      local_148 = (uint ****)0x0;
      uStack_140 = (code *)0x1;
      local_138 = (uint ****)0x0;
      ansi_width::ansi_width(uStack_a8,lStack_a0);
      display_item_name(&ppuStack_58,lStack_b8,param_4,0);
      pad_left(&pppuStack_98,&DAT_0013623a,1,_DAT_00000028);
      pad_left(&local_108,&DAT_0013623a,1,0xc);
      pppuStack_e0 = (uint ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
      pcStack_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_148 = (uint ****)&PTR_DAT_00312758;
      uStack_140 = (code *)0x3;
      local_128 = (qword *)0x0;
      local_138 = (uint ****)&local_e8;
      pppuStack_130 = (uint ***)0x2;
      local_e8 = &pppuStack_98;
      local_d8 = &local_108;
      uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (local_b0,&local_148);
      core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_003128f0);
      core::ptr::drop_in_place<alloc::string::String>(&local_108);
      core::ptr::drop_in_place<alloc::string::String>(&pppuStack_98);
      if (local_150._7_1_ != '\0') {
        core::str::_<impl_str>::trim_matches(uStack_50,uStack_48);
        dired::calculate_and_update_positions(lStack_40,lStack_a0);
      }
      local_d8 = (qword *)((long)param_4 + 0xfa);
      pppuStack_e0 = (uint ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
      pcStack_d0 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
      local_148 = (uint ****)&DAT_00128c70;
      uStack_140 = (code *)0x2;
      local_128 = (qword *)0x0;
      local_138 = (uint ****)&local_e8;
      pppuStack_130 = (uint ***)0x2;
      local_e8 = (undefined8 ****)&ppuStack_58;
      uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                        (local_b0,&local_148);
      core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_00312908);
      core::ptr::drop_in_place<alloc::string::String>(&ppuStack_58);
      goto LAB_0022b4b8;
    case 0x11:
switchD_00226af9_caseD_11:
      *(byte *)((long)pqVar11 + -0x75) =
           *(byte *)((long)pqVar11 + -0x75) + (char)UNRECOVERED_JUMPTABLE;
      *(undefined2 *)pqVar11 = in_FS;
      goto code_r0x0022b568;
    case 0x12:
switchD_00226af9_caseD_12:
      core::result::Result<T,E>::unwrap();
      goto switchD_00226a60_caseD_22ab82;
    case 0x13:
switchD_00226af9_caseD_13:
      LOCK();
      *(undefined4 *)((long)pqVar13 * 9) = 0;
      UNLOCK();
      return;
    case 0x14:
switchD_00226af9_caseD_14:
      *(byte *)pqVar13 = *(byte *)pqVar13 & (byte)UNRECOVERED_JUMPTABLE;
      *(byte *)(ppppuVar19 + -3) = *(byte *)(ppppuVar19 + -3) + (char)((ulong)pqVar11 >> 8);
      *(byte *)((long)pqVar13 + -2) = 0xff;
      pcVar1 = (code *)swi(3);
      pqVar13 = (qword *)(*pcVar1)();
      return pqVar13;
    case 0x15:
      goto switchD_00226a60_caseD_22bcc4;
    case 0x16:
      goto switchD_00226a60_caseD_22bc91;
    case 0x17:
switchD_00226af9_caseD_17:
      UNRECOVERED_JUMPTABLE_00 = &UINT_00134700;
      UNRECOVERED_JUMPTABLE = (uint *)(long)(int)(&UINT_00134700)[*(byte *)((long)pqVar13 + 0xf3)];
      goto code_r0x0022bccc;
    case 0x18:
switchD_00226af9_caseD_18:
      chrono::datetime::DateTime<Tz>::checked_add_signed();
      if ((uint)local_118 == 0) {
        uVar12 = core::option::expect_failed(&DAT_001362e8,0x21,&PTR_DAT_00312988);
        core::ptr::
        drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>
                  (&local_118);
        pqVar13 = (qword *)_Unwind_Resume(uVar12);
        return pqVar13;
      }
      goto switchD_00226a60_caseD_22bdcb;
    case 0x19:
switchD_00226af9_caseD_19:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
      goto switchD_00226af9_caseD_1a;
    case 0x1b:
      goto switchD_0022be19_switchD;
    case 0x1c:
switchD_00226af9_caseD_1c:
      *(byte *)pqVar11 = *(byte *)pqVar11 + (char)pqVar11;
      *(code *)((long)UNRECOVERED_JUMPTABLE + 0x33) =
           (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE + 0x33) | 0x8e);
      bVar23 = (uint)UNRECOVERED_JUMPTABLE < 4;
      goto switchD_00226af9_caseD_1a;
    case 0x1d:
switchD_00226af9_caseD_1d:
      *(byte *)(ppppuVar19 + -3) = *(byte *)(ppppuVar19 + -3) + (char)((ulong)pqVar11 >> 8);
      *(byte *)((long)param_2 + -2) =
           *(byte *)((long)param_2 + -2) | ((char)pqVar11 + -0xe) - NAN(in_ST0);
      pcVar1 = (code *)swi(3);
      pqVar13 = (qword *)(*pcVar1)();
      return pqVar13;
                    /* catch() { ... } // from try @ 0022c030 with catch @ 0022c042 */
    default:
switchD_00226af9_caseD_1e:
      pcVar1 = (code *)swi(3);
      pqVar13 = (qword *)(*pcVar1)();
      return pqVar13;
    case 0x20:
switchD_00226af9_caseD_20:
      pcVar1 = (code *)swi(3);
      pqVar13 = (qword *)(*pcVar1)();
      return pqVar13;
    case 0x24:
switchD_00226af9_caseD_24:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_in_cleanup();
    case 0x26:
switchD_00226af9_caseD_26:
      param_2 = pqVar13;
      goto switchD_00226a60_caseD_22c076;
    case 0x28:
switchD_00226af9_caseD_28:
      if (UNRECOVERED_JUMPTABLE == (uint *)&DAT_00000001 || !bVar22) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x29:
switchD_00226af9_caseD_29:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2a:
switchD_00226af9_caseD_2a:
      pqVar11 = (qword *)&DAT_00312a38;
      goto switchD_00226a60_caseD_22d39c;
    case 0x2b:
switchD_00226af9_caseD_2b:
      *(byte *)((long)pqVar11 + -0x75) =
           (*(byte *)((long)pqVar11 + -0x75) - (char)UNRECOVERED_JUMPTABLE) - bVar23;
      local_128 = (qword *)((ulong)pqVar11 & 0xffffffffffffff18);
      goto code_r0x0022d314;
    case 0x2c:
switchD_00226af9_caseD_2c:
      UNRECOVERED_JUMPTABLE =
           (uint *)((long)&UINT_00134754 + (long)(int)(&UINT_00134754)[(long)UNRECOVERED_JUMPTABLE])
      ;
      goto switchD_00226a60_caseD_22d379;
    case 0x2d:
switchD_00226af9_caseD_2d:
      *(uint *****)((long)UNRECOVERED_JUMPTABLE + 8) = local_138;
      *(uint ****)((long)UNRECOVERED_JUMPTABLE + 0x10) = pppuStack_130;
      goto code_r0x0022d314;
    case 0x2e:
switchD_00226af9_caseD_2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2f:
switchD_00226af9_caseD_2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
switchD_00226a60_caseD_226b07:
    local_150._4_4_ = uVar10;
    local_150._0_4_ = (undefined4)CONCAT71((int7)((ulong)pqVar11 >> 8),1);
                    /* try { // try from 00226b1a to 00226c24 has its CatchHandler @ 00226d70 */
    std::fs::metadata(&local_e8,(uint **)param_2[1],(uint **)param_2[2]);
    ppppuVar6 = local_e8;
    uVar12 = core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                       (&local_e8);
    bVar22 = (int)ppppuVar6 != 2;
    pqVar11 = (qword *)CONCAT71((int7)((ulong)uVar12 >> 8),bVar22);
    uVar17 = (ulong)((local_b0[0] & 0xf000) == 0x4000 && bVar22);
    uVar20 = (ulong)local_150._4_4_;
switchD_00226af9_caseD_0:
    local_150 = (qword *)(uVar20 << 0x20);
    lVar18 = (long)local_150;
    local_150._4_4_ = (uint)uVar20;
    if (*(long *)param_3 == 0) {
      local_118 = (uint ***)0x0;
      uVar9 = 2;
      local_150 = (qword *)CONCAT44(local_150._4_4_,(int)CONCAT71((int7)((ulong)pqVar11 >> 8),1));
    }
    else {
      local_e8 = *(undefined8 *****)(param_3 + 8);
      pppuStack_e0 = *(uint ****)(param_3 + 0x10);
      local_d8 = *(qword **)(param_3 + 0x18);
      pcStack_d0 = *(code **)(param_3 + 0x20);
      local_c8 = *(long *)(param_3 + 0x28);
      if (local_e8 == (undefined8 ****)0x0) {
        local_118 = (uint ***)0x0;
        local_150 = (qword *)(uVar20 << 0x20);
        core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>
                  (&local_e8);
      }
      else {
        local_f8 = *(uint ****)(param_3 + 0x28);
        local_118 = *(uint ****)(param_3 + 8);
        uStack_110 = *(undefined4 *)(param_3 + 0x10);
        uStack_10c = *(undefined4 *)(param_3 + 0x14);
        local_108 = *(uint *****)(param_3 + 0x18);
        uStack_100 = *(code **)(param_3 + 0x20);
        local_150 = (qword *)lVar18;
      }
      if (local_118 == (uint ***)0x0) {
        uVar9 = 2;
        local_150 = (qword *)((ulong)local_150._4_4_ << 0x20);
      }
      else {
        local_150 = (qword *)((ulong)local_150._4_4_ << 0x20);
                    /* try { // try from 00226c41 to 00226c77 has its CatchHandler @ 00226d86 */
        uVar9 = new::get_file_type(&local_118,(uint **)param_2[1],(uint **)param_2[2],uVar17);
        param_3 = (code *)(extraout_RDX & 0xffffffff);
        local_150 = (qword *)((ulong)local_150 & 0xffffffff00000000);
      }
    }
    if (uStack_140._4_1_ == '\0') {
      local_e8 = (undefined8 ****)0x0;
      pppuStack_e0 = (uint ***)0x1;
      local_d8 = (qword *)0x0;
    }
    else {
      get_security_context(&local_e8,(uint **)param_2[1],(uint **)param_2[2],uVar17);
    }
    param_1[0x24] = local_f8;
    *(undefined4 *)(param_1 + 0x22) = (undefined4)local_108;
    *(undefined4 *)((long)param_1 + 0x114) = local_108._4_4_;
    *(undefined4 *)(param_1 + 0x23) = (undefined4)uStack_100;
    *(undefined4 *)((long)param_1 + 0x11c) = uStack_100._4_4_;
    param_1[0x20] = local_118;
    param_1[0x21] = (uint ***)CONCAT44(uStack_10c,uStack_110);
    param_1[2] = (uint ***)local_128;
    *param_1 = (uint ***)local_138;
    param_1[1] = pppuStack_130;
    param_1[5] = (uint ***)param_2[2];
    uVar3 = *(undefined4 *)((long)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)((long)param_1 + 0x24) = uVar5;
    param_1[6] = (uint ***)local_e8;
    param_1[7] = pppuStack_e0;
    param_1[8] = (uint ***)local_d8;
    param_1[9] = (uint ***)0x3;
    *(undefined4 *)(param_1 + 0x1f) = uVar9;
    *(int *)((long)param_1 + 0xfc) = (int)param_3;
    *(byte *)(param_1 + 0x25) = (byte)uVar17;
    pqVar13 = (qword *)(ulong)param_7;
    *(byte *)((long)param_1 + 0x129) = param_7;
    if ((local_150._4_1_ != '\0') &&
       (pqVar13 = (qword *)0x0, *local_148 != (uint ***)0x8000000000000000)) {
                    /* try { // try from 00226d34 to 00226d38 has its CatchHandler @ 00226d69 */
      pqVar13 = (qword *)core::ptr::drop_in_place<std::ffi::os_str::OsString>();
    }
    return pqVar13;
  }
  if (param_7 == 0) {
    pqVar11 = (qword *)std::path::Path::file_name((uint **)param_2[1],(uint **)param_2[2]);
    param_4 = unaff_R14;
    if (pqVar11 == (qword *)0x0) {
      pqVar11 = (qword *)new::___closure__((uint **)param_2[1],(uint **)param_2[2]);
    }
    do {
      ppppuVar19 = (uint ****)&local_e8;
      pqVar13 = pqVar11;
      std::sys::os_str::bytes::Slice::to_owned();
      local_128 = local_d8;
      local_138 = (uint ****)local_e8;
      pppuStack_130 = pppuStack_e0;
      pqVar11 = (qword *)CONCAT71((int7)((ulong)local_d8 >> 8),1);
      uVar17 = 0;
      uVar14 = uVar20 & 0xff;
      UNRECOVERED_JUMPTABLE_00 = &switchD_00226af9::switchdataD_001346b0;
      bVar23 = 0xffffffffffecb94f <
               (ulong)(long)(int)(&switchD_00226af9::switchdataD_001346b0)[uVar14];
      UNRECOVERED_JUMPTABLE =
           (uint *)((long)&switchD_00226af9::switchdataD_001346b0 +
                   (long)(int)(&switchD_00226af9::switchdataD_001346b0)[uVar14]);
      bVar22 = (code *)UNRECOVERED_JUMPTABLE == (code *)0x0;
      uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
      uVar10 = (uint)uVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar14) {
      case 0:
        goto switchD_00226af9_caseD_0;
      case 1:
        goto switchD_00226af9_caseD_1;
      case 2:
        goto switchD_00226a60_caseD_226b63;
      case 3:
        goto switchD_00226a60_caseD_226b5b;
      case 4:
        goto switchD_00226af9_caseD_4;
      case 5:
switchD_00226af9_caseD_5:
        break;
      case 6:
        goto switchD_00226af9_caseD_6;
      case 7:
        goto switchD_00226af9_caseD_7;
      case 8:
        goto switchD_00226af9_caseD_8;
      case 9:
        goto switchD_00226af9_caseD_9;
      case 10:
        goto switchD_00226af9_caseD_a;
      case 0xb:
        goto switchD_00226af9_caseD_b;
      case 0xc:
        goto switchD_00226af9_caseD_c;
      case 0xd:
        goto switchD_00226af9_caseD_d;
      case 0xe:
        goto switchD_00226af9_caseD_e;
      case 0xf:
        goto switchD_00226af9_caseD_f;
      case 0x10:
        goto switchD_00226af9_caseD_10;
      case 0x11:
        goto switchD_00226af9_caseD_11;
      case 0x12:
        goto switchD_00226af9_caseD_12;
      case 0x13:
        goto switchD_00226af9_caseD_13;
      case 0x14:
        goto switchD_00226af9_caseD_14;
      case 0x15:
        goto switchD_00226a60_caseD_22bcc4;
      case 0x16:
        goto switchD_00226a60_caseD_22bc91;
      case 0x17:
        goto switchD_00226af9_caseD_17;
      case 0x18:
        goto switchD_00226af9_caseD_18;
      case 0x19:
        goto switchD_00226af9_caseD_19;
      case 0x1a:
        goto switchD_00226af9_caseD_1a;
      case 0x1b:
        goto switchD_0022be19_switchD;
      case 0x1c:
        goto switchD_00226af9_caseD_1c;
      case 0x1d:
        goto switchD_00226af9_caseD_1d;
      default:
        goto switchD_00226af9_caseD_1e;
      case 0x20:
        goto switchD_00226af9_caseD_20;
      case 0x24:
        goto switchD_00226af9_caseD_24;
      case 0x26:
        goto switchD_00226af9_caseD_26;
      case 0x28:
        goto switchD_00226af9_caseD_28;
      case 0x29:
        goto switchD_00226af9_caseD_29;
      case 0x2a:
        goto switchD_00226af9_caseD_2a;
      case 0x2b:
        goto switchD_00226af9_caseD_2b;
      case 0x2c:
        goto switchD_00226af9_caseD_2c;
      case 0x2d:
        goto switchD_00226af9_caseD_2d;
      case 0x2e:
        goto switchD_00226af9_caseD_2e;
      case 0x2f:
        goto switchD_00226af9_caseD_2f;
      }
    } while( true );
  }
                    /* try { // try from 00226a28 to 00226ac8 has its CatchHandler @ 00226d75 */
  ppppuVar19 = (uint ****)&local_e8;
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone();
  local_128 = local_d8;
  local_138 = (uint ****)local_e8;
  pppuStack_130 = pppuStack_e0;
  pqVar11 = (qword *)CONCAT71((int7)((ulong)local_d8 >> 8),1);
  UNRECOVERED_JUMPTABLE = (uint *)(param_6 & 0xff);
  param_4 = unaff_R14;
switchD_00226af9_caseD_4:
  UNRECOVERED_JUMPTABLE_00 = &switchD_00226a60::switchdataD_001346c0;
  uVar14 = (ulong)(int)(&switchD_00226a60::switchdataD_001346c0)[(long)UNRECOVERED_JUMPTABLE];
  bVar22 = 0xffffffffffecb93f < uVar14;
  UNRECOVERED_JUMPTABLE = (uint *)((long)&switchD_00226a60::switchdataD_001346c0 + uVar14);
  cVar8 = (char)UNRECOVERED_JUMPTABLE;
  puVar15 = &uStack_158;
  puVar16 = &uStack_158;
  uVar10 = (uint)uVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(UNRECOVERED_JUMPTABLE) {
  case (uint *)0x226a62:
    uVar17 = 0;
    uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
    goto switchD_00226af9_caseD_0;
  case (uint *)0x226b07:
    goto switchD_00226a60_caseD_226b07;
  case (uint *)0x226b5b:
switchD_00226a60_caseD_226b5b:
    uVar17 = 1;
    uVar20 = (ulong)pqVar11 & 0xffffffff;
    goto switchD_00226af9_caseD_0;
  case (uint *)0x226b63:
switchD_00226a60_caseD_226b63:
    uVar17 = (ulong)param_7;
    uVar20 = (ulong)pqVar11 & 0xffffffff;
    goto switchD_00226af9_caseD_0;
  case (uint *)0x227bdb:
switchD_00226a60_caseD_227bdb:
    UNRECOVERED_JUMPTABLE_00 = &UINT_001346d0;
switchD_00226af9_caseD_c:
                    /* WARNING: Could not recover jumptable at 0x00227be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar13 = (qword *)(*(code *)((long)UNRECOVERED_JUMPTABLE_00 +
                                 (long)(int)UNRECOVERED_JUMPTABLE_00[(long)pqVar11]))();
    return pqVar13;
  case (uint *)0x227bf2:
switchD_00226a60_caseD_227bf2:
    *(uint *)((long)UNRECOVERED_JUMPTABLE + -0x80) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE + -0x80) + 1;
    *(char *)(uVar17 + 0x65) =
         *(char *)(uVar17 + 0x65) + (char)((ulong)UNRECOVERED_JUMPTABLE_00 >> 8);
    break;
  case (uint *)0x227c09:
switchD_00226a60_caseD_227c09:
    *(int *)((long)UNRECOVERED_JUMPTABLE_00 + -1) =
         (*(int *)((long)UNRECOVERED_JUMPTABLE_00 + -1) + 1) - (uint)bVar22;
    if (param_3[0xe7] != (code)0x0) goto LAB_00227c65;
    break;
  case (uint *)0x227c23:
    unique0x00006780 = (ram0x001346bf - (int)param_2) - (uint)bVar22;
    *(int *)((long)&UINT_00134640 + uVar14) = *(int *)((long)&UINT_00134640 + uVar14) + 1;
    *(char *)(uVar17 + 0x34) = *(char *)(uVar17 + 0x34) + 'F';
    break;
  case (uint *)0x227c40:
    *(int *)((long)&UINT_00134640 + uVar14) = *(int *)((long)&UINT_00134640 + uVar14) + 1;
  case (uint *)0x227c4b:
    *(char *)(uVar17 + 0x17) = *(char *)(uVar17 + 0x17) + 'F';
    break;
  case (uint *)0x227c8f:
    goto code_r0x00227c8f;
  case (uint *)0x22ab82:
switchD_00226a60_caseD_22ab82:
    core::ptr::drop_in_place<alloc::string::String>();
    core::ptr::drop_in_place<alloc::string::String>(&pppuStack_98);
    display_date(&local_e8,param_3,param_4);
    uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_148 = (uint ****)&PTR_DAT_00312708;
    uStack_140 = (code *)0x2;
    local_128 = (qword *)0x0;
    local_138 = (uint ****)&local_108;
    pppuStack_130 = (uint ***)0x1;
    local_108 = (uint ****)&local_e8;
    uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (local_b0,&local_148);
    core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_00312848);
    core::ptr::drop_in_place<alloc::string::String>(&local_e8);
    local_148 = (uint ****)0x0;
    uStack_140 = (code *)0x1;
    local_138 = (uint ****)0x0;
    ansi_width::ansi_width(uStack_a8,lStack_a0);
    pppuVar21 = (uint ***)&pppuStack_98;
    display_item_name(pppuVar21,lStack_b8,param_4,0);
    uVar17 = uStack_90;
    if (in_stack_00000038 == '\0') {
LAB_0022b35b:
      bVar22 = true;
    }
    else {
      local_148 = (uint ****)((ulong)local_148 & 0xffffffff00000000);
      auVar24 = core::char::methods::encode_utf8_raw(0x27,&local_148);
      cVar8 = core::slice::_<impl[T]>::starts_with(uVar17,uStack_88,auVar24._0_8_,auVar24._8_8_);
      if (cVar8 != '\0') goto LAB_0022b35b;
      local_e8 = &pppuStack_98;
      pppuStack_e0 = (uint ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_148 = (uint ****)&PTR_DAT_003126d8;
      uStack_140 = (code *)0x1;
      local_128 = (qword *)0x0;
      pppuStack_130 = (uint ***)0x1;
      pppuVar21 = (uint ***)&stack0xffffffffffffffe8;
      local_138 = (uint ****)&local_e8;
      core::option::Option<T>::map_or_else(pppuVar21,&local_148);
      bVar22 = false;
    }
    local_f8 = (uint ***)pppuVar21[2];
    local_108 = (uint ****)*pppuVar21;
    uStack_100 = (code *)pppuVar21[1];
    if (local_150._7_1_ != '\0') {
      if (*(long *)(lStack_40 + 0x10) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(*(long *)(lStack_40 + 0x10) * 0x10 + -8 + *(long *)(lStack_40 + 8)) + 1;
      }
      dired::update_positions(lStack_40,lVar18 + lStack_a0,(long)pppuVar21[2] + lVar18 + lStack_a0);
    }
    local_d8 = (qword *)((long)param_4 + 0xfa);
    local_e8 = (undefined8 ****)&local_108;
    pppuStack_e0 = (uint ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
    pcStack_d0 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
    local_148 = (uint ****)&DAT_00128c70;
    uStack_140 = (code *)0x2;
    local_128 = (qword *)0x0;
    pppuStack_130 = (uint ***)0x2;
    local_138 = (uint ****)&local_e8;
    uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (local_b0,&local_148);
    core::result::Result<T,E>::unwrap(uVar7,&PTR_DAT_00312860);
    core::ptr::drop_in_place<alloc::string::String>(&local_108);
    if (!bVar22) {
      core::ptr::drop_in_place<alloc::string::String>(&pppuStack_98);
    }
LAB_0022b4b8:
    local_e8 = (undefined8 ****)local_b0;
    pppuStack_e0 = (uint ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
    local_148 = (uint ****)&DAT_00123c10;
    uStack_140 = (code *)0x1;
    local_128 = (qword *)0x0;
    local_138 = (uint ****)&local_e8;
    pppuStack_130 = (uint ***)0x1;
    lVar18 = std::io::Write::write_fmt(uStack_80,&local_148);
    if (lVar18 == 0) {
      core::ptr::drop_in_place<alloc::string::String>(local_b0);
      pqVar11 = (qword *)0x0;
    }
    else {
      pqVar11 = (qword *)uucore::mods::error::
                         _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                         ::from(lVar18);
      core::ptr::drop_in_place<alloc::string::String>(local_b0);
    }
switchD_00226af9_caseD_f:
    return pqVar11;
  case (uint *)0x22b566:
    pqVar11 = (qword *)((ulong)pqVar11 & 0xffffffffffffffa0);
code_r0x0022b568:
    *(byte *)pqVar11 = *(byte *)pqVar11 + (char)pqVar11;
    *(byte *)param_2 = *(byte *)param_2 + (char)((ulong)pqVar11 >> 8);
switchD_00226a60_caseD_22b572:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (uint *)0x22b572:
    goto switchD_00226a60_caseD_22b572;
  case (uint *)0x22b57e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (uint *)0x22b58a:
    uVar17 = (ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE + (long)pqVar11 * 4);
code_r0x0022b58d:
                    /* WARNING: Could not recover jumptable at 0x0022b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar13 = (qword *)(*(code *)((long)UNRECOVERED_JUMPTABLE + uVar17))();
    return pqVar13;
  case (uint *)0x22bc91:
switchD_00226a60_caseD_22bc91:
    bVar2 = (byte)UNRECOVERED_JUMPTABLE & 7;
    *(byte *)ppppuVar19 = *(byte *)ppppuVar19 >> bVar2 | *(byte *)ppppuVar19 << 8 - bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (uint *)0x22bca1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (uint *)0x22bcc4:
switchD_00226a60_caseD_22bcc4:
code_r0x0022bccc:
                    /* WARNING: Could not recover jumptable at 0x0022bccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar13 = (qword *)(*(code *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_00))();
    return pqVar13;
  case (uint *)0x22bcd4:
    std::fs::Metadata::modified();
    if ((int)local_148 == 1000000000) {
      core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>
                (&local_150);
    }
    return local_150;
  case (uint *)0x22bdcb:
switchD_00226a60_caseD_22bdcb:
    uStack_158 = (uint)local_118;
    uStack_154 = local_118._4_4_;
    chrono::offset::local::Local::now(&local_118);
    _<chrono::naive::datetime::NaiveDateTime_as_core::cmp::PartialOrd>::partial_cmp
              (&uStack_158,&local_118);
    UNRECOVERED_JUMPTABLE = (uint *)((ulong)param_4[0x17] ^ 0x8000000000000000);
    bVar23 = UNRECOVERED_JUMPTABLE < (code *)0x4;
    goto switchD_00226af9_caseD_1a;
  case (uint *)0x22be04:
    *(byte *)pqVar11 = *(byte *)pqVar11 + (char)pqVar11;
    *(byte *)((long)pqVar11 + 0xf) = *(byte *)((long)pqVar11 + 0xf) + cVar8;
    puVar15 = (uint *)((long)pqVar11 + -0x73);
    *puVar15 = *puVar15 >> 1 | (uint)((*puVar15 & 1) != 0) << 0x1f;
  case (uint *)0x22be12:
switchD_00226a60_caseD_22be12:
    UNRECOVERED_JUMPTABLE_00 =
         (uint *)((long)UNRECOVERED_JUMPTABLE +
                 (long)*(int *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_00 * 4));
switchD_0022be19_switchD:
                    /* WARNING: Could not recover jumptable at 0x0022be19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar13 = (qword *)(*(code *)UNRECOVERED_JUMPTABLE_00)();
    return pqVar13;
  case (uint *)0x22be29:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (uint *)0x22be55:
    uStack_158 = *(uint *)(pqVar13 + 0x18);
    uStack_154 = *(undefined4 *)((long)pqVar13 + 0xc4);
    local_150 = (qword *)pqVar13[0x19];
    local_148 = (uint ****)0x8;
    uStack_140 = (code *)0x0;
    chrono::datetime::DateTime<Tz>::format_with_items(&local_118,&local_138,&uStack_158);
    _<T_as_alloc::string::ToString>::to_string(param_2,&local_118);
    pqVar13 = (qword *)core::ptr::
                       drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>
                                 (&local_118);
    return pqVar13;
  case (uint *)0x22c04c:
    pcVar1 = (code *)swi(3);
    pqVar13 = (qword *)(*pcVar1)();
    return pqVar13;
  case (uint *)0x22c053:
    pcVar1 = (code *)swi(3);
    pqVar13 = (qword *)(*pcVar1)();
    return pqVar13;
  case (uint *)0x22c076:
    goto switchD_00226a60_caseD_22c076;
  case (uint *)0x22c07d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (uint *)0x22c084:
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + -0x40;
    *(byte *)((long)pqVar11 + -0x7b) = *(byte *)((long)pqVar11 + -0x7b) + cVar8;
    puVar15 = (uint *)(uVar17 + 8);
    goto switchD_00226a60_caseD_22c076;
  case (uint *)0x22c08b:
    goto switchD_00226a60_caseD_22c08b;
  case (uint *)0x22d2e7:
    out(0xe8,(char)pqVar11);
    return pqVar11;
  case (uint *)0x22d30d:
    *(char *)(param_5 - 0x75) = *(char *)(param_5 - 0x75) + cVar8 + bVar22;
    local_128 = (qword *)((ulong)pqVar11 & 0xffffffffffffff30);
code_r0x0022d314:
    *(qword **)((long)UNRECOVERED_JUMPTABLE + 0x18) = local_128;
    *(code **)((long)UNRECOVERED_JUMPTABLE + 0x20) = uStack_140;
    *(uint ****)((long)UNRECOVERED_JUMPTABLE + 0x28) = local_118;
    *(code **)((long)UNRECOVERED_JUMPTABLE + 0x30) = local_120;
    *(qword **)((long)UNRECOVERED_JUMPTABLE + 0x38) = (qword *)CONCAT44(uStack_10c,uStack_110);
    *(code **)((long)UNRECOVERED_JUMPTABLE + 0x40) = param_3;
    return (qword *)CONCAT44(uStack_10c,uStack_110);
  case (uint *)0x22d327:
    *(int *)((long)&UINT_001346e8 + uVar14) = (int)pqVar11;
    local_128 = pqVar11;
    goto code_r0x0022d314;
  case (uint *)0x22d379:
switchD_00226a60_caseD_22d379:
                    /* WARNING: Could not recover jumptable at 0x0022d379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar13 = (qword *)(*(code *)UNRECOVERED_JUMPTABLE)();
    return pqVar13;
  case (uint *)0x22d39c:
switchD_00226a60_caseD_22d39c:
    pqVar13 = (qword *)core::fmt::Formatter::debug_tuple_field1_finish(pqVar11);
    return pqVar13;
  case (uint *)0x22d3bf:
    local_150 = (qword *)UNRECOVERED_JUMPTABLE;
    pqVar13 = (qword *)core::fmt::Formatter::debug_tuple_field3_finish
                                 (pqVar11,
                                  "IOErrorContextBlockSizeParseErrorDiredAndZeroAreIncompatibleAlreadyListedErrorTimeStyleParseError/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs%"
                                  ,0xe,ppppuVar19 + 1,
                                  &PTR_drop_in_place<std_io_error_Error>_00311fc0,ppppuVar19 + 2,
                                  &PTR_drop_in_place<std_path_PathBuf>_00312a78,&local_150,
                                  &DAT_00312a98);
    return pqVar13;
  case (uint *)0x22d3ef:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_00227c70:
  if (((char)uVar17 == '\0') || (param_3[0xed] == (code)0x0)) {
    return pqVar11;
  }
switchD_00226af9_caseD_e:
code_r0x00227c8f:
  pqVar13 = (qword *)::alloc::slice::_<impl[T]>::sort_by_key();
  return pqVar13;
switchD_00226af9_caseD_1a:
  UNRECOVERED_JUMPTABLE_00 = (uint *)(code *)0x4;
  if (bVar23) {
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
  }
  UNRECOVERED_JUMPTABLE = &switchD_0022be19::switchdataD_00134710;
  goto switchD_00226a60_caseD_22be12;
switchD_00226a60_caseD_22c076:
  *(undefined8 *)((long)puVar15 + -8) = 0x22c07f;
  UNRECOVERED_JUMPTABLE_00 = (uint *)file_type();
  pqVar13 = &__DT_RELA[0x9e9].r_addend;
  if (UNRECOVERED_JUMPTABLE_00 != (uint *)0x0) {
    pqVar11 = (qword *)(ulong)((*UNRECOVERED_JUMPTABLE_00 & 0xf000) - 0x1000);
    puVar16 = puVar15;
    param_4 = ppppuVar19;
switchD_00226a60_caseD_22c08b:
    *(undefined8 *)((long)puVar16 + -8) = 0xf000b8;
    *(byte *)param_2 = *(byte *)param_2 + (char)((ulong)pqVar11 >> 8);
    iRam000000000022b098 = iRam000000000022b098 + (uint)pqVar11;
    switch((uint)pqVar11 >> 0xc) {
    case 0:
      pqVar13 = (qword *)0x7c;
      break;
    case 3:
      pqVar13 = (qword *)0x2f;
      break;
    case 7:
      *(undefined8 *)((long)puVar16 + -0x10) = 0x22c0c2;
      lVar18 = get_metadata(param_4,param_2);
      if (lVar18 != 0) {
        uVar9 = *(undefined4 *)(lVar18 + 0x38);
        *(undefined8 *)((long)puVar16 + -0x10) = 0x22c0cf;
        cVar8 = core::ops::function::FnOnce::call_once(uVar9);
        if (cVar8 != '\0') {
          return (qword *)0x2a;
        }
      }
    default:
      pqVar13 = &__DT_RELA[0x9e9].r_addend;
      break;
    case 9:
      pqVar13 = (qword *)&DAT_00000040;
      break;
    case 0xb:
      pqVar13 = (qword *)0x3d;
    }
  }
  return pqVar13;
}