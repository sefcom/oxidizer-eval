void __rustcall uu_unexpand::tabstops_parse(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined8 local_b8;
  long lStack_b0;
  long local_a8;
  char local_a0;
  char local_9f;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_68);
  local_b8 = 0;
  lStack_b0 = 8;
  local_a8 = 0;
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  do {
                    /* try { // try from 001b2780 to 001b27ae has its CatchHandler @ 001b289c */
    auVar6 = core::str::iter::SplitInternal<P>::next(&local_78);
    lVar1 = lStack_b0;
    lVar3 = auVar6._0_8_;
    if (lVar3 == 0) {
      lVar3 = lStack_b0 + local_a8 * 8;
      local_78 = lStack_b0;
      local_70 = lVar3;
      cVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any(&local_78)
      ;
      if (cVar2 == '\0') {
        uVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold
                          (lVar1,lVar3);
        if ((uVar5 & 1) != 0) {
          param_1[3] = local_a8;
          param_1[1] = local_b8;
          param_1[2] = lStack_b0;
          *param_1 = 0;
          return;
        }
        uVar4 = 0x8000000000000002;
      }
      else {
        uVar4 = 0x8000000000000000;
      }
LAB_001b286e:
      param_1[1] = uVar4;
LAB_001b2877:
      *param_1 = 1;
      core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&local_b8);
      return;
    }
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_a0,lVar3);
    if (local_a0 != '\0') {
      if (local_9f != '\x02') {
                    /* try { // try from 001b282f to 001b2846 has its CatchHandler @ 001b289a */
        uVar4 = core::str::_<impl_str>::trim_start_matches(lVar3,auVar6._8_8_);
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_90,uVar4);
        param_1[3] = local_80;
        *(undefined4 *)(param_1 + 1) = local_90;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
        *(undefined4 *)(param_1 + 2) = uStack_88;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_84;
        goto LAB_001b2877;
      }
      uVar4 = 0x8000000000000001;
      goto LAB_001b286e;
    }
    ::alloc::vec::Vec<T,A>::push(&local_b8,local_98);
  } while( true );
}