long __rustcall uu_tail::chunks::LinesChunkBuffer::fill(ulong *param_1,long param_2)

{
  long *plVar1;
  undefined uVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
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
  undefined8 local_2030 [512];
  undefined8 local_1030;
  
  puVar3 = PTR_memset_002c4d90;
  local_1030 = 0;
  local_2030[0] = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_5030 = 0;
  local_6030 = 0;
  uVar2 = *(undefined *)(param_1 + 6);
  (*(code *)PTR_memset_002c4d90)(local_2030,0,0x2000);
  (*(code *)puVar3)(&local_6060,0,0x2010);
  local_4050 = uVar2;
  lVar5 = ::alloc::boxed::Box<T>::new(&local_6060);
  puVar3 = PTR_memcpy_002c47b8;
  do {
                    /* try { // try from 0020c0e0 to 0020c0ed has its CatchHandler @ 0020c2e2 */
    LinesChunk::fill(&local_6060,lVar5,param_2);
    lVar6 = local_6058;
    if (CONCAT71(uStack_605f,local_6060) != 0) {
LAB_0020c27e:
      core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar5);
      return lVar6;
    }
    if (local_6058 == 0) {
      if (param_1[3] != 0) {
        uVar11 = (param_1[3] + param_1[2]) - 1;
        uVar9 = param_1[1];
        uVar8 = 0;
        if (*param_1 <= uVar11) {
          uVar8 = *param_1;
        }
        param_2 = uVar11 - uVar8;
                    /* try { // try from 0020c1bc to 0020c1e0 has its CatchHandler @ 0020c2e0 */
        auVar12 = LinesChunk::get_buffer(*(undefined8 *)(uVar9 + param_2 * 8));
        local_6060 = *(undefined *)(param_1 + 6);
        cVar4 = core::slice::_<impl[T]>::ends_with(auVar12._0_8_,auVar12._8_8_,&local_6060,1);
        if (cVar4 == '\0') {
          plVar1 = (long *)(*(long *)(uVar9 + param_2 * 8) + 0x2008);
          *plVar1 = *plVar1 + 1;
          param_1[4] = param_1[4] + 1;
        }
                    /* try { // try from 0020c20c to 0020c213 has its CatchHandler @ 0020c2de */
        while (lVar6 = ::alloc::collections::vec_deque::VecDeque<T,A>::pop_front(param_1),
              lVar6 != 0) {
          uVar9 = param_1[4];
          uVar8 = param_1[5];
          uVar11 = uVar9 - *(long *)(lVar6 + 0x2008);
          if (uVar11 <= uVar8) {
            lVar10 = 0;
            if (uVar8 <= uVar9) {
              lVar10 = uVar9 - uVar8;
            }
                    /* try { // try from 0020c23d to 0020c267 has its CatchHandler @ 0020c2d1 */
            LinesChunk::from_chunk(local_4048,lVar6,lVar10);
            uVar7 = ::alloc::boxed::Box<T>::new(local_4048);
            ::alloc::collections::vec_deque::VecDeque<T,A>::push_front(param_1,uVar7);
            core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar6);
            core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar5);
            return 0;
          }
          param_1[4] = uVar11;
          core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar6);
        }
LAB_0020c2b7:
                    /* try { // try from 0020c2b7 to 0020c2c3 has its CatchHandler @ 0020c2e0 */
        core::option::unwrap_failed(&PTR_DAT_002be0a8);
LAB_0020c2c4:
        uVar7 = core::option::unwrap_failed(&PTR_DAT_002be090);
                    /* catch() { ... } // from try @ 0020c23d with catch @ 0020c2d1 */
        core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(param_2);
        core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(lVar5);
        lVar5 = _Unwind_Resume(uVar7);
        return lVar5;
      }
      lVar6 = 0;
      goto LAB_0020c27e;
    }
    param_1[4] = param_1[4] + *(long *)(lVar5 + 0x2008);
    ::alloc::collections::vec_deque::VecDeque<T,A>::push_back(param_1,lVar5);
    if (param_1[3] == 0) {
      core::option::expect_failed(&DAT_00129e24,0x14,&PTR_DAT_002be078);
      goto LAB_0020c2b7;
    }
    uVar9 = 0;
    if (*param_1 <= param_1[2]) {
      uVar9 = *param_1;
    }
    if (param_1[5] <
        param_1[4] - *(long *)(*(long *)(param_1[1] + (param_1[2] - uVar9) * 8) + 0x2008)) {
      lVar6 = ::alloc::collections::vec_deque::VecDeque<T,A>::pop_front(param_1);
      if (lVar6 == 0) goto LAB_0020c2c4;
      param_1[4] = param_1[4] - *(long *)(lVar6 + 0x2008);
      lVar5 = lVar6;
    }
    else {
      uVar2 = *(undefined *)(param_1 + 6);
      (*(code *)puVar3)(&local_6060,local_2030,0x2000);
      local_4060 = 0;
      uStack_4058 = 0;
      local_4050 = uVar2;
      lVar5 = ::alloc::boxed::Box<T>::new(&local_6060);
    }
  } while( true );
}