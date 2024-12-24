long * __rustcall uu_join::parse_settings(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined uVar5;
  long lVar6;
  long local_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long lStack_128;
  byte local_120;
  byte bStack_11f;
  byte bStack_11e;
  undefined uStack_11d;
  undefined uStack_11c;
  undefined uStack_11b;
  undefined uStack_11a;
  undefined local_119;
  long local_118;
  long lStack_110;
  long local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  get_and_parse_field_number(&local_178,param_2,"j");
  lVar3 = lStack_168;
  lVar6 = uStack_170;
  if ((local_178 != 0) ||
     (get_and_parse_field_number(&local_178,param_2,"1"), local_a0 = lStack_168,
     local_98 = uStack_170, local_178 != 0)) {
    param_1[1] = uStack_170;
    param_1[2] = lStack_168;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  get_and_parse_field_number(&local_178,param_2,"2");
  local_b0 = uStack_170;
  if (local_178 != 0) {
    param_1[1] = uStack_170;
    param_1[2] = lStack_168;
LAB_001c4124:
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  parse_print_settings(&local_178,param_2);
  lVar2 = uStack_170;
  if (local_178 != 0) {
    param_1[1] = local_178;
    param_1[2] = uStack_170;
    goto LAB_001c4124;
  }
  local_a8 = lStack_168;
  bStack_11f = uStack_170._2_1_;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_11d = 0;
  uStack_11c = 0;
  uStack_11b = 0;
  uStack_11a = 0;
  local_119 = 10;
  local_148 = -0x7ffffffffffffffd;
  local_178 = 0;
  uStack_170 = 8;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 1;
  local_150 = 0;
  bStack_11e = (byte)lVar2 & 1;
  local_120 = (byte)((ulong)lVar2 >> 8) & 1;
  bStack_11f = bStack_11f & 1;
                    /* try { // try from 001c41b9 to 001c4225 has its CatchHandler @ 001c4632 */
  uStack_11d = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"i",1);
  get_field_number(&local_118,lVar6,lVar3,local_98,local_a0);
  if (local_118 == 0) {
    lStack_130 = lStack_110;
    get_field_number(&local_118,lVar6,lVar3,local_b0,local_a8);
    if (local_118 == 0) {
      lStack_128 = lStack_110;
                    /* try { // try from 001c4252 to 001c4297 has its CatchHandler @ 001c4632 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_118,param_2,"t",1);
      lVar6 = clap_builder::parser::error::MatchesError::unwrap("t",1,&local_118);
      if (lVar6 == 0) {
LAB_001c42d3:
                    /* try { // try from 001c42d3 to 001c4329 has its CatchHandler @ 001c4632 */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_118,param_2,"o",1);
        lVar6 = clap_builder::parser::error::MatchesError::unwrap("o",1,&local_118);
        if (lVar6 != 0) {
          uVar1 = *(undefined8 *)(lVar6 + 8);
          lVar6 = *(long *)(lVar6 + 0x10);
          cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,lVar6,&DAT_0010b74c,4);
          if (cVar4 == '\0') {
            local_c8 = 0;
            lStack_c0 = 8;
            local_b8 = 0;
            local_118 = 0x2c00000020;
            lStack_110 = CONCAT44(lStack_110._4_4_,9);
            _<core::str::pattern::MultiCharEqPattern<C>as_core::str::pattern::Pattern>::
            into_searcher(local_68,&local_118,uVar1,lVar6);
            local_118 = 0;
            uStack_100 = uStack_60;
            uStack_fc = uStack_5c;
            local_f8 = local_58;
            uStack_f0 = uStack_50;
            local_e8 = local_48;
            uStack_e0 = uStack_40;
            local_d8 = local_38;
            local_d0 = 1;
            lStack_110 = lVar6;
            while (lVar6 = core::str::iter::SplitInternal<P>::next(&local_118), lVar6 != 0) {
                    /* try { // try from 001c4407 to 001c444b has its CatchHandler @ 001c4620 */
              Spec::parse(&local_80,lVar6);
              if (local_80 != 0) {
                param_1[1] = local_78;
                param_1[2] = local_70;
                *param_1 = -0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(&local_c8);
                goto LAB_001c4240;
              }
              local_90 = local_78;
              local_88 = local_70;
              ::alloc::vec::Vec<T,A>::push(&local_c8,&local_90);
            }
            local_108 = local_b8;
            local_118 = local_c8;
            lStack_110 = lStack_c0;
                    /* try { // try from 001c4468 to 001c446f has its CatchHandler @ 001c45dd */
            core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(&local_178);
            lStack_168 = local_108;
            local_178 = local_118;
            uStack_170 = lStack_110;
          }
          else {
            uStack_11c = 1;
          }
        }
                    /* try { // try from 001c4483 to 001c44c8 has its CatchHandler @ 001c4632 */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_118,param_2,"e");
        lVar6 = clap_builder::parser::error::MatchesError::unwrap("e",1,&local_118);
        if (lVar6 != 0) {
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                    (&local_118,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
                    /* try { // try from 001c44c9 to 001c44d5 has its CatchHandler @ 001c4609 */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&lStack_160);
          local_150 = local_108;
          lStack_160 = local_118;
          lStack_158 = lStack_110;
        }
                    /* try { // try from 001c44e8 to 001c45d7 has its CatchHandler @ 001c4632 */
        cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (param_2,"nocheck-order",0xd);
        if (cVar4 != '\0') {
          uStack_11a = 1;
        }
        cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (param_2,"check-order",0xb);
        if (cVar4 != '\0') {
          uStack_11a = 2;
        }
        cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"header",6)
        ;
        if (cVar4 != '\0') {
          uStack_11b = 1;
        }
        cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"z",1);
        uVar5 = 10;
        if (cVar4 != '\0') {
          uVar5 = 0;
        }
        param_1[8] = local_138;
        param_1[9] = lStack_130;
        param_1[6] = local_148;
        param_1[7] = lStack_140;
        param_1[4] = lStack_158;
        param_1[5] = local_150;
        param_1[2] = lStack_168;
        param_1[3] = lStack_160;
        *param_1 = local_178;
        param_1[1] = uStack_170;
        param_1[10] = lStack_128;
        *(uint *)(param_1 + 0xb) =
             CONCAT13(uStack_11d,CONCAT12(bStack_11e,CONCAT11(bStack_11f,local_120)));
        *(ushort *)((long)param_1 + 0x5c) = CONCAT11(uStack_11b,uStack_11c);
        *(undefined *)((long)param_1 + 0x5e) = uStack_11a;
        *(undefined *)((long)param_1 + 0x5f) = uVar5;
        return param_1;
      }
      parse_separator(&local_118,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      lVar2 = local_108;
      lVar3 = lStack_110;
      lVar6 = local_118;
      if (local_118 != -0x7ffffffffffffffc) {
                    /* try { // try from 001c42ba to 001c42c3 has its CatchHandler @ 001c45f5 */
        core::ptr::drop_in_place<uu_join::SepSetting>(&local_148);
        local_148 = lVar6;
        lStack_140 = lVar3;
        local_138 = lVar2;
        goto LAB_001c42d3;
      }
      param_1[1] = lStack_110;
      param_1[2] = local_108;
      goto LAB_001c423d;
    }
  }
  param_1[1] = local_118;
  param_1[2] = lStack_110;
LAB_001c423d:
  *param_1 = -0x8000000000000000;
LAB_001c4240:
  core::ptr::drop_in_place<uu_join::Settings>(&local_178);
  return param_1;
}