void __rustcall
uu_more::break_buff(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80 [6];
  undefined2 local_50;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_80);
  local_90 = 0;
  local_50 = 0;
  local_88 = param_3;
  uVar1 = core::iter::traits::iterator::Iterator::fold(&local_90);
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_90,uVar1,0);
  if (local_90 == 0) {
    local_a8 = local_88;
    uStack_a0 = local_80[0];
    local_98 = 0;
    _<char_as_core::str::pattern::Pattern>::into_searcher(local_80,param_2,param_3);
    local_90 = 0;
    local_50 = 0;
    local_88 = param_3;
    while( true ) {
                    /* try { // try from 001de1a0 to 001de1c5 has its CatchHandler @ 001de224 */
      lVar2 = core::str::iter::SplitInternal<P>::next_inclusive(&local_90);
      if (lVar2 == 0) break;
      auVar3 = core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::
               call_once(local_48,lVar2);
      break_line(local_48,auVar3._0_8_,auVar3._8_8_,param_4);
                    /* try { // try from 001de1d0 to 001de1d7 has its CatchHandler @ 001de215 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_a8,local_40,local_38);
      local_38 = 0;
                    /* try { // try from 001de1e1 to 001de1e8 has its CatchHandler @ 001de224 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_48);
    }
    param_1[2] = local_98;
    *param_1 = local_a8;
    param_1[1] = uStack_a0;
    return;
  }
  uVar1 = ::alloc::raw_vec::handle_error(local_88,local_80[0]);
                    /* catch() { ... } // from try @ 001de1d0 with catch @ 001de215 */
                    /* try { // try from 001de218 to 001de22e has its CatchHandler @ 001de237 */
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_48);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_a8);
  _Unwind_Resume(uVar1);
  return;
}