long __rustcall
uu_tail::tail_stdin(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char cStack_a4;
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  paths::Input::resolve(&local_40,param_3);
  if (CONCAT44(uStack_3c,local_40) == -0x8000000000000000) {
    paths::HeaderPrinter::print_input(param_2,param_3);
    uVar2 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_b8,0x2000,uVar2);
                    /* try { // try from 002136f7 to 00213701 has its CatchHandler @ 00213873 */
    lVar3 = unbounded_tail(&local_b8,param_1);
    if (lVar3 != 0) {
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>
                (&local_b8);
      return lVar3;
    }
    uVar2 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    local_68 = local_98;
    uStack_64 = uStack_94;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    local_88 = local_b8;
    uStack_84 = uStack_b4;
    uStack_80 = uStack_b0;
    uStack_7c = uStack_ac;
    uVar4 = ::alloc::boxed::Box<T>::new(&local_88);
    lVar3 = follow::watch::Observer::add_stdin
                      (param_4,uVar2,uVar1,uVar4,
                       &
                       PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_io_stdio_Stdin>>_002be748
                       ,1);
    if (lVar3 == 0) {
      return 0;
    }
    return lVar3;
  }
  local_c8 = local_30;
  local_d8 = local_40;
  uStack_d4 = uStack_3c;
  uStack_d0 = uStack_38;
  uStack_cc = uStack_34;
                    /* try { // try from 0021373a to 00213744 has its CatchHandler @ 002138a8 */
  same_file::Handle::stdin(&local_b8);
  if (cStack_a4 == '\x02') {
    uVar2 = 0;
  }
  else {
    local_88 = local_b8;
    uStack_84 = uStack_b4;
    uStack_80 = uStack_b0;
    uStack_7c = uStack_ac;
                    /* try { // try from 00213765 to 002137a6 has its CatchHandler @ 00213888 */
    uVar2 = same_file::Handle::as_file_mut(&local_88);
    local_50 = _<std::fs::File_as_std::io::Seek>::seek(uVar2,2,0);
    uVar2 = 0;
    if (local_50._0_8_ == 0) {
      uVar2 = local_50._8_8_;
    }
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_50);
                    /* try { // try from 002137a7 to 002137b0 has its CatchHandler @ 0021386e */
    core::ptr::drop_in_place<same_file::Handle>(&local_88);
    if (cStack_a4 != '\x02') goto LAB_002137c2;
  }
                    /* try { // try from 002137b8 to 002137e0 has its CatchHandler @ 002138a8 */
  core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&local_b8)
  ;
LAB_002137c2:
  lVar3 = tail_file(param_1,param_2,param_3,CONCAT44(uStack_cc,uStack_d0),local_c8,param_4,uVar2);
  if (lVar3 == 0) {
    core::ptr::drop_in_place<std::path::PathBuf>(&local_d8);
    return 0;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(&local_d8);
  return lVar3;
}