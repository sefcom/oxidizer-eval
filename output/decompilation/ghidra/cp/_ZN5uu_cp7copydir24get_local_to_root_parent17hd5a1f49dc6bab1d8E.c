void _ZN5uu_cp7copydir24get_local_to_root_parent17hd5a1f49dc6bab1d8E
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  if ((param_4 != 0) &&
     (param_2 = _ZN3std4path4Path12strip_prefix17hf232be0ca9110327E(param_2,param_3,param_4,param_5)
     , param_2 == 0)) {
    *param_1 = 0x8000000000000000;
    return;
  }
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978)
            (param_1,param_2);
  return;
}