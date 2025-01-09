long * __rustcall uu_pr::pr(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined local_68 [56];
  
  open(&local_a8);
  if (CONCAT44(uStack_a4,local_a8) == -0x7ffffffffffffffb) {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(local_68,0x10000);
    uVar1 = read_stream_and_create_pages(param_4,local_68,0);
                    /* try { // try from 002c6ce0 to 002c6cea has its CatchHandler @ 002c6dc3 */
    while (_<core::iter::adapters::take_while::TakeWhile<I,P>as_core::iter::traits::iterator::Iterator>
           ::next(&local_88,uVar1), CONCAT44(uStack_7c,local_80) != -0x8000000000000000) {
      local_c8 = local_80;
      uStack_c4 = uStack_7c;
      uStack_c0 = uStack_78;
      uStack_bc = uStack_74;
      local_b8 = local_70;
                    /* try { // try from 002c6d11 to 002c6d18 has its CatchHandler @ 002c6db4 */
      auVar2 = print_page(CONCAT44(uStack_74,uStack_78),local_70,param_4,local_88 + 1);
      if (auVar2._0_8_ != 0) {
                    /* try { // try from 002c6d61 to 002c6d6d has its CatchHandler @ 002c6db2 */
        _<uu_pr::PrError_as_core::convert::From<std::io::error::Error>>::from
                  (&local_a8,auVar2._8_8_);
        *(undefined4 *)(param_1 + 2) = local_98;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_94;
        *(undefined4 *)(param_1 + 3) = uStack_90;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_8c;
        *(undefined4 *)param_1 = local_a8;
        *(undefined4 *)((long)param_1 + 4) = uStack_a4;
        *(undefined4 *)(param_1 + 1) = uStack_a0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_9c;
                    /* try { // try from 002c6d84 to 002c6d8d has its CatchHandler @ 002c6db0 */
        core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&local_c8);
        core::ptr::
        drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_(usize,alloc::vec::Vec<uu_pr::FileLine>)>>
                  (uVar1);
        return param_1;
      }
                    /* try { // try from 002c6d1e to 002c6d25 has its CatchHandler @ 002c6dc3 */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&local_c8);
    }
    core::ptr::
    drop_in_place<alloc::boxed::Box<dyn_core::iter::traits::iterator::Iterator_Item_(usize,alloc::vec::Vec<uu_pr::FileLine>)>>
              (uVar1);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = -0x7ffffffffffffffb;
  }
  else {
    *param_1 = CONCAT44(uStack_a4,local_a8);
    param_1[1] = CONCAT44(uStack_9c,uStack_a0);
    param_1[2] = CONCAT44(uStack_94,local_98);
    param_1[3] = CONCAT44(uStack_8c,uStack_90);
  }
  return param_1;
}