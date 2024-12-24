void __rustcall
uu_tail::follow::files::FileHandling::update_metadata
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long local_178;
  long local_170 [21];
  undefined local_c8 [168];
  
  lVar2 = *param_4;
  if (lVar2 == 2) {
    std::fs::metadata(&local_178,param_2,param_3);
    lVar2 = local_178;
    if (local_178 == 2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (2,local_170[0]);
      goto LAB_00202b37;
    }
    param_4 = local_170;
  }
  else {
    param_4 = param_4 + 1;
  }
  (*(code *)PTR_memcpy_002c47b8)(local_c8,param_4,0xa8);
LAB_00202b37:
  plVar1 = (long *)get_mut(param_1,param_2,param_3);
  *plVar1 = lVar2;
  (*(code *)PTR_memcpy_002c47b8)(plVar1 + 1,local_c8,0xa8);
  return;
}