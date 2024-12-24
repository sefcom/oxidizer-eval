undefined (*) [16] __rustcall
uu_tail::follow::files::FileHandling::tail_file
          (undefined (*param_1) [16],undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined local_50 [40];
  
  local_130 = 0xffffffffffffffff;
  local_128 = 0;
  local_150 = 0;
  local_148 = 8;
  local_140 = 0;
  lStack_138 = 0;
                    /* try { // try from 00202bba to 00202c3d has its CatchHandler @ 00202d3b */
  lVar2 = get_mut(param_2,param_3,param_4);
  if (*(long *)(lVar2 + 200) == 0) {
LAB_00202d04:
    (*param_1)[8] = 0;
  }
  else {
    auVar4 = chunks::BytesChunkBuffer::fill(&local_150,lVar2 + 200);
    if (auVar4._0_8_ != 0) {
LAB_00202bee:
      *param_1 = auVar4;
      goto LAB_00202d0f;
    }
    if (lStack_138 == 0) goto LAB_00202d04;
    cVar1 = needs_header(param_2,param_3,param_4,param_5);
    if (cVar1 != '\0') {
      lVar2 = get(param_2,param_3,param_4);
      _<alloc::string::String_as_core::clone::Clone>::clone(&local_108,lVar2 + 0xb0);
                    /* try { // try from 00202c4d to 00202c51 has its CatchHandler @ 00202d2c */
      paths::HeaderPrinter::print(param_2 + 9,uStack_100,local_f8);
                    /* try { // try from 00202c52 to 00202cfd has its CatchHandler @ 00202d3b */
      core::ptr::drop_in_place<alloc::string::String>(&local_108);
    }
    local_158 = std::io::stdio::stdout();
    uVar3 = std::io::stdio::Stderr::lock(&local_158);
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_50,0x2000,uVar3);
    auVar4 = chunks::BytesChunkBuffer::print(&local_150,local_50);
    if (auVar4._0_8_ != 0) goto LAB_00202bee;
    std::sys::pal::unix::os::split_paths::bytes_to_path(&local_120,param_3,param_4);
    local_f8 = param_2[2];
    local_108 = *param_2;
    uStack_100 = param_2[1];
    *(undefined4 *)param_2 = local_120;
    *(undefined4 *)((long)param_2 + 4) = uStack_11c;
    *(undefined4 *)(param_2 + 1) = uStack_118;
    *(undefined4 *)((long)param_2 + 0xc) = uStack_114;
    param_2[2] = local_110;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_108);
    local_108 = 2;
    update_metadata(param_2,param_3,param_4,&local_108);
    (*param_1)[8] = 1;
  }
  *(undefined8 *)*param_1 = 0;
LAB_00202d0f:
  core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(&local_150);
  return param_1;
}