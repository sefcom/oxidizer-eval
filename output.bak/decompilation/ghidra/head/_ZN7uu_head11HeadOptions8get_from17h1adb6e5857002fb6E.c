undefined8 * __rustcall uu_head::HeadOptions::get_from(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined uStack_108;
  undefined uStack_107;
  undefined uStack_106;
  undefined uStack_105;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_106 = 0;
  uStack_105 = 10;
  local_130 = 0;
  uStack_128 = 10;
  local_120 = 0;
  uStack_118 = 8;
  local_110 = 0;
                    /* try { // try from 001b9035 to 001b9171 has its CatchHandler @ 001b9265 */
  uStack_108 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"QUIET",5);
  uStack_107 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"VERBOSE",7)
  ;
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,&DAT_00114b80,4);
  uStack_105 = 10;
  if (cVar1 != '\0') {
    uStack_105 = 0;
  }
  uStack_106 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                         (param_2,"-PRESUME-INPUT-PIPE",0x13);
  Mode::from(&local_100,param_2);
  if (CONCAT44(uStack_fc,local_100) == -0x8000000000000000) {
    uStack_128 = local_f0;
    local_130 = CONCAT44(uStack_f4,uStack_f8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_100,param_2,&DAT_00114bd8,4);
    clap_builder::parser::error::MatchesError::unwrap(&local_b8,&DAT_00114bd8,4,&local_100);
    if (CONCAT44(uStack_b4,local_b8) == 0) {
      puVar2 = (undefined4 *)::alloc::alloc::Global::alloc_impl(0x18);
      if (puVar2 == (undefined4 *)0x0) {
                    /* try { // try from 001b9231 to 001b9240 has its CatchHandler @ 001b9265 */
                    /* WARNING: Subroutine does not return */
        ::alloc::alloc::handle_alloc_error(8,0x18);
      }
                    /* try { // try from 001b91a9 to 001b91b5 has its CatchHandler @ 001b9241 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_100);
      local_68 = local_f0;
      local_78 = local_100;
      uStack_74 = uStack_fc;
      uStack_70 = uStack_f8;
      uStack_6c = uStack_f4;
      *(undefined8 *)(puVar2 + 4) = local_f0;
      *puVar2 = local_100;
      puVar2[1] = uStack_fc;
      puVar2[2] = uStack_f8;
      puVar2[3] = uStack_f4;
                    /* try { // try from 001b91d8 to 001b91e9 has its CatchHandler @ 001b9265 */
      ::alloc::slice::hack::into_vec(&local_100,puVar2,1);
    }
    else {
      local_28 = local_88;
      uStack_24 = uStack_84;
      uStack_20 = uStack_80;
      uStack_1c = uStack_7c;
      local_38 = local_98;
      uStack_34 = uStack_94;
      uStack_30 = uStack_90;
      uStack_2c = uStack_8c;
      local_48 = local_a8;
      uStack_44 = uStack_a4;
      uStack_40 = uStack_a0;
      uStack_3c = uStack_9c;
      local_58 = local_b8;
      uStack_54 = uStack_b4;
      uStack_50 = uStack_b0;
      uStack_4c = uStack_ac;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_100,&local_58);
    }
                    /* try { // try from 001b91ea to 001b91f6 has its CatchHandler @ 001b924e */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_120);
    param_1[4] = local_f0;
    param_1[5] = CONCAT44(uStack_104,
                          CONCAT13(uStack_105,CONCAT12(uStack_106,CONCAT11(uStack_107,uStack_108))))
    ;
    param_1[2] = CONCAT44(uStack_fc,local_100);
    param_1[3] = CONCAT44(uStack_f4,uStack_f8);
    *param_1 = local_130;
    param_1[1] = uStack_128;
  }
  else {
    param_1[1] = CONCAT44(uStack_fc,local_100);
    param_1[2] = CONCAT44(uStack_f4,uStack_f8);
    param_1[3] = local_f0;
    *param_1 = 4;
    core::ptr::drop_in_place<uu_head::HeadOptions>(&local_130);
  }
  return param_1;
}