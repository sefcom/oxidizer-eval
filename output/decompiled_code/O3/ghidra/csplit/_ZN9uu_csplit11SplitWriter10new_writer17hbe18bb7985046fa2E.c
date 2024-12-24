undefined8 __rustcall uu_csplit::SplitWriter::new_writer(undefined8 *param_1)

{
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined local_28 [24];
  
  split_name::SplitName::get(local_28,param_1[4],param_1[5]);
  std::fs::File::create(&local_48,local_28);
  if (local_48 == 0) {
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&local_48,0x2000,uStack_44);
                    /* try { // try from 002bf268 to 002bf26f has its CatchHandler @ 002bf29a */
    core::ptr::
    drop_in_place<core::option::Option<std::io::buffered::bufwriter::BufWriter<std::fs::File>>>
              (param_1);
    param_1[2] = local_38;
    param_1[3] = uStack_30;
    *param_1 = CONCAT44(uStack_44,local_48);
    param_1[1] = uStack_40;
    param_1[5] = param_1[5] + 1;
    param_1[6] = 0;
    *(undefined *)(param_1 + 7) = 0;
    uStack_40 = 0;
  }
  return uStack_40;
}