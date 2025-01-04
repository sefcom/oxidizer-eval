undefined8 * __rustcall
uu_sort::FieldSelector::parse
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_128 [2];
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0 [2];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined7 local_a0;
  char cStack_99;
  undefined local_98 [16];
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  local_100 = param_2;
  local_f8 = param_4;
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,0x2c,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  lVar3 = core::str::iter::SplitInternal<P>::next(&local_78);
  if (lVar3 != 0) {
    split_key_options(&local_d0,lVar3);
    lVar3 = lStack_b8;
    uVar5 = local_c0;
    lVar4 = core::str::iter::SplitInternal<P>::next(&local_78);
    if (lVar4 == 0) {
      local_f0[0] = 0;
    }
    else {
      core::ops::function::FnOnce::call_once(local_f0,lVar4);
    }
    if ((lVar3 == 0) &&
       ((local_f0[0] == 0 ||
        (cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                           (CONCAT44(uStack_dc,local_e0),CONCAT44(uStack_d4,uStack_d8),1,0),
        cVar2 != '\0')))) {
      local_118 = &local_f8;
      uStack_110 = local_f0;
      parse::___closure__(&local_d0,local_128);
    }
    else {
      local_88 = uVar5;
      local_80 = lVar3;
      uStack_110 = (long *)CONCAT44(uStack_d4,uStack_d8);
      local_128[0] = local_f0[0];
      parse_with_options(&local_d0,local_98,local_128);
    }
    if (cStack_99 == '\x02') {
      uVar5 = parse::___closure__(local_100,param_3,local_128);
      *param_1 = uVar5;
      param_1[1] = &PTR_drop_in_place<uu_sort_SortError>_002ff678;
      *(undefined *)((long)param_1 + 0x37) = 2;
    }
    else {
      param_1[6] = CONCAT17(cStack_99,local_a0);
      param_1[4] = local_b0;
      param_1[5] = uStack_a8;
      param_1[2] = local_c0;
      param_1[3] = lStack_b8;
      *param_1 = CONCAT44(uStack_cc,local_d0);
      param_1[1] = CONCAT44(uStack_c4,uStack_c8);
    }
    return param_1;
  }
  core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002ffaa8);
  pcVar1 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar1)();
  return puVar6;
}