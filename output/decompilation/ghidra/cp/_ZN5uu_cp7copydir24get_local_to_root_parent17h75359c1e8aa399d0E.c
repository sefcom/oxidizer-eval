void _ZN5uu_cp7copydir24get_local_to_root_parent17h75359c1e8aa399d0E
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  if ((param_4 != 0) &&
     (param_2 = _ZN3std4path4Path12strip_prefix17h5d7e53b0b6c79402E(param_2,param_3,param_4,param_5)
     , param_2 == 0)) {
    *param_1 = 0x8000000000000000;
    return;
  }
  _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E(param_1,param_2);
  return;
}