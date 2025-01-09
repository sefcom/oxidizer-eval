long __rustcall uu_tail::chunks::LinesChunkBuffer::fill(ulong *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined uVar11;
  undefined auVar12 [16];
  undefined local_6060;
  undefined7 uStack_605f;
  long local_6058;
  undefined8 local_6030;
  undefined8 local_5030;
  undefined8 local_4060;
  undefined8 uStack_4058;
  undefined local_4050;
  undefined local_4048 [24];
  undefined8 local_4030;
  undefined8 local_3030;
  undefined local_2048 [24];
  undefined8 local_2030;
  undefined8 local_1030;
  
  puVar2 = PTR_memset_002c2d40;
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_5030 = 0;
  local_6030 = 0;
  uVar11 = *(undefined *)(param_1 + 6);
  (*(code *)PTR_memset_002c2d40)(local_4048,0,0x2000);
  (*(code *)puVar2)(&local_6060,0,0x2010);
LAB_00213805:
  local_4050 = uVar11;
  lVar4 = ::alloc::boxed::Box<T>::new(&local_6060);
  do {
                    /* try { // try from 00213818 to 00213825 has its CatchHandler @ 00213a14 */
    LinesChunk::fill(&local_6060,lVar4,param_2);
    if (CONCAT71(uStack_605f,local_6060) != 0) {
LAB_002139b0:
      core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar4);
      return local_6058;
    }
    if (local_6058 != 1) {
      if (param_1[3] == 0) {
        local_6058 = 0;
        goto LAB_002139b0;
      }
      uVar10 = (param_1[3] + param_1[2]) - 1;
      uVar8 = param_1[1];
      uVar7 = 0;
      if (*param_1 <= uVar10) {
        uVar7 = *param_1;
      }
      param_2 = uVar10 - uVar7;
                    /* try { // try from 002138ea to 0021390e has its CatchHandler @ 00213a12 */
      auVar12 = LinesChunk::get_buffer(*(undefined8 *)(uVar8 + param_2 * 8));
      local_6060 = *(undefined *)(param_1 + 6);
      cVar3 = core::slice::_<impl[T]>::ends_with(auVar12._0_8_,auVar12._8_8_,&local_6060,1);
      if (cVar3 == '\0') {
        plVar1 = (long *)(*(long *)(uVar8 + param_2 * 8) + 0x2008);
        *plVar1 = *plVar1 + 1;
        param_1[4] = param_1[4] + 1;
      }
                    /* try { // try from 0021393c to 00213943 has its CatchHandler @ 00213a10 */
      while (lVar5 = ::alloc::collections::vec_deque::VecDeque<T,A>::pop_front(param_1), lVar5 != 0)
      {
        uVar8 = param_1[4];
        uVar7 = param_1[5];
        uVar10 = uVar8 - *(long *)(lVar5 + 0x2008);
        if (uVar10 <= uVar7) {
          lVar9 = 0;
          if (uVar7 <= uVar8) {
            lVar9 = uVar8 - uVar7;
          }
                    /* try { // try from 0021396d to 00213997 has its CatchHandler @ 00213a03 */
          LinesChunk::from_chunk(local_2048,lVar5,lVar9);
          uVar6 = ::alloc::boxed::Box<T>::new(local_2048);
          ::alloc::collections::vec_deque::VecDeque<T,A>::push_front(param_1,uVar6);
          core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar5);
          core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar4);
          return 0;
        }
        param_1[4] = uVar10;
        core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar5);
      }
LAB_002139e9:
                    /* try { // try from 002139e9 to 002139f5 has its CatchHandler @ 00213a12 */
      core::option::unwrap_failed(&PTR_s_src_uu_tail_src_chunks_rs_002bc8f0);
LAB_002139f6:
      uVar6 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_chunks_rs_002bc8d8);
                    /* catch() { ... } // from try @ 0021396d with catch @ 00213a03 */
      core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(param_2);
      core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar4);
      lVar4 = _Unwind_Resume(uVar6);
      return lVar4;
    }
    param_1[4] = param_1[4] + *(long *)(lVar4 + 0x2008);
    ::alloc::collections::vec_deque::VecDeque<T,A>::push_back(param_1,lVar4);
    if (param_1[3] == 0) {
      core::option::expect_failed
                ("Out of bounds access",0x14,&PTR_s_src_uu_tail_src_chunks_rs_002bc8c0);
      goto LAB_002139e9;
    }
    uVar8 = 0;
    if (*param_1 <= param_1[2]) {
      uVar8 = *param_1;
    }
    if (param_1[4] - *(long *)(*(long *)(param_1[1] + (param_1[2] - uVar8) * 8) + 0x2008) <=
        param_1[5]) break;
    lVar5 = ::alloc::collections::vec_deque::VecDeque<T,A>::pop_front(param_1);
    if (lVar5 == 0) goto LAB_002139f6;
    param_1[4] = param_1[4] - *(long *)(lVar5 + 0x2008);
    lVar4 = lVar5;
  } while( true );
  uVar11 = *(undefined *)(param_1 + 6);
  (*(code *)PTR_memcpy_002c2760)(&local_6060,local_4048,0x2000);
  local_4060 = 0;
  uStack_4058 = 0;
  goto LAB_00213805;
}