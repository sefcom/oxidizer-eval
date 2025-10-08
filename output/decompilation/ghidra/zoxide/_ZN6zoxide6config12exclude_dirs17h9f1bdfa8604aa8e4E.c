void _ZN6zoxide6config12exclude_dirs17h9f1bdfa8604aa8e4E(undefined8 param_1)

{
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined local_30;
  
  _ZN3std3env6var_os17h745bce177e3d772bE(&local_68,&DAT_00118d50,0x10);
  local_50 = PTR__ZN3std4path4Path11to_path_buf17h8f562ce20f00c82fE_0023b940;
  local_48 = local_60;
  local_40 = local_58;
  local_38 = _ZN3std3sys3pal4unix2os11split_paths12is_separator17hb66c58b70205f58dE;
  local_30 = 0;
                    /* try { // try from 00190bef to 00190bfb has its CatchHandler @ 00190c10 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hfa210c25162442daE(param_1,&local_50);
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h62f050d99d211acdE
            (local_68,local_60);
  return;
}