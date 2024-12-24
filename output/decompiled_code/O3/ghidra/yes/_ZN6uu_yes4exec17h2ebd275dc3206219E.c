ulong __rustcall uu_yes::exec(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = std::io::stdio::stdout();
  uVar2 = std::io::stdio::Stderr::lock(&local_28);
  local_38 = uVar2;
                    /* try { // try from 001a6a0e to 001a6a32 has its CatchHandler @ 001a6a89 */
  uVar1 = uucore::features::signals::enable_pipe_errors();
  if (uVar1 == 0x86) {
    local_2c = 1;
    uVar3 = splice::splice_data(param_1,param_2,&local_2c);
    while (uVar3 == 0) {
                    /* try { // try from 001a6a50 to 001a6a5b has its CatchHandler @ 001a6a8e */
      uVar3 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(&local_38,param_1,param_2);
      uVar2 = local_38;
    }
  }
  else {
    uVar3 = (ulong)uVar1 << 0x20 | 2;
  }
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(uVar2);
  return uVar3;
}