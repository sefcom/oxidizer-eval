long __rustcall
uu_head::read_but_last_n_lines(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_e0 = std::io::stdio::stdout();
  local_e8 = std::io::stdio::Stderr::lock(&local_e0);
                    /* try { // try from 001b9b43 to 001b9b57 has its CatchHandler @ 001b9c4b */
  take::TakeAllBut<I>::new(&local_68,param_1,param_3,param_2);
  local_78 = local_38;
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  while( true ) {
                    /* try { // try from 001b9bb0 to 001b9bba has its CatchHandler @ 001b9c5f */
    _<uu_head::take::TakeAllBut<I>as_core::iter::traits::iterator::Iterator>::next
              (&local_c0,&local_a8);
    if (local_c0 == -0x7fffffffffffffff) {
                    /* try { // try from 001b9c00 to 001b9c09 has its CatchHandler @ 001b9c4b */
      core::ptr::
      drop_in_place<uu_head::take::TakeAllBut<uucore::features::lines::Lines<&mut_std::io::buffered::bufreader::BufReader<&std::fs::File>>>>
                (&local_a8);
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_e8);
      return 0;
    }
    lVar1 = local_b8;
    if (local_c0 == -0x8000000000000000) break;
    local_d8 = local_c0;
    local_d0 = local_b8;
    local_c8 = local_b0;
                    /* try { // try from 001b9be3 to 001b9beb has its CatchHandler @ 001b9c50 */
    lVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(&local_e8,local_b8);
    if (lVar1 != 0) {
                    /* try { // try from 001b9c17 to 001b9c20 has its CatchHandler @ 001b9c49 */
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_d8);
      break;
    }
                    /* try { // try from 001b9bf4 to 001b9bfd has its CatchHandler @ 001b9c5f */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_d8);
  }
                    /* try { // try from 001b9c21 to 001b9c2a has its CatchHandler @ 001b9c4b */
  core::ptr::
  drop_in_place<uu_head::take::TakeAllBut<uucore::features::lines::Lines<&mut_std::io::buffered::bufreader::BufReader<&std::fs::File>>>>
            (&local_a8);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_e8);
  return lVar1;
}