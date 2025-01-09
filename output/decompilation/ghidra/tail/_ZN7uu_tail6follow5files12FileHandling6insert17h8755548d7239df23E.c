void __rustcall
uu_tail::follow::files::FileHandling::insert
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5
          )

{
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  
                    /* try { // try from 0020e616 to 0020e61f has its CatchHandler @ 0020e6f0 */
  canonicalize_path(&local_210);
  if (param_5 != '\0') {
                    /* try { // try from 0020e625 to 0020e636 has its CatchHandler @ 0020e6e1 */
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_f8,&local_210);
    local_1c8 = local_e8;
    local_1d8 = local_f8;
    uStack_1d4 = uStack_f4;
    uStack_1d0 = uStack_f0;
    uStack_1cc = uStack_ec;
                    /* try { // try from 0020e651 to 0020e658 has its CatchHandler @ 0020e6ca */
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(param_1);
    param_1[2] = local_1c8;
    *param_1 = CONCAT44(uStack_1d4,local_1d8);
    param_1[1] = CONCAT44(uStack_1cc,uStack_1d0);
  }
  local_1e8 = local_200;
  local_1f8 = local_210;
  uStack_1f4 = uStack_20c;
  uStack_1f0 = uStack_208;
  uStack_1ec = uStack_204;
  (*(code *)PTR_memcpy_002c2760)(&local_f8,param_4,0xd8);
  hashbrown::map::HashMap<K,V,S,A>::insert(&local_1d8,param_1 + 3,&local_1f8,&local_f8);
  core::ptr::drop_in_place<core::option::Option<uu_tail::follow::files::PathData>>(&local_1d8);
  return;
}