undefined8 __rustcall uu_sort::Output::into_write(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_18;
  
  if (*param_2 == -0x8000000000000000) {
    uVar1 = std::io::stdio::stdout();
    uVar1 = ::alloc::boxed::Box<T>::new(uVar1);
    ppuVar2 = (undefined **)&DAT_002ff6e8;
  }
  else {
    local_18 = param_2[2];
    local_28 = *(undefined4 *)param_2;
    uStack_24 = *(undefined4 *)((long)param_2 + 4);
    uStack_20 = *(undefined4 *)(param_2 + 1);
    uStack_1c = *(undefined4 *)((long)param_2 + 0xc);
    local_34 = *(undefined4 *)(param_2 + 3);
                    /* try { // try from 0021e5d3 to 0021e5ee has its CatchHandler @ 0021e62c */
    local_30 = std::fs::File::set_len(&local_34,0);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_30);
                    /* try { // try from 0021e5f3 to 0021e5f7 has its CatchHandler @ 0021e627 */
    uVar1 = ::alloc::boxed::Box<T>::new(local_34);
    core::ptr::drop_in_place<alloc::string::String>(&local_28);
    ppuVar2 = &PTR_drop_in_place<std_fs_File>_002ff738;
  }
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(param_1,0x2000,uVar1,ppuVar2);
  return param_1;
}