long * _ZN6uu_pwd12logical_path17h67df90d7519c7ea2E(long *param_1)

{
  char cVar1;
  long local_40;
  long lStack_38;
  long local_30;
  long local_28 [3];
  
  _ZN3std3env6var_os17hc2689bb17ea5a37cE(local_28,"PWD",3);
  if (local_28[0] == -0x8000000000000000) {
    local_40 = -0x8000000000000000;
  }
  else {
    _ZN4core3ops8function6FnOnce9call_once17hf39ea7a48d4b8f78E(&local_40,local_28);
                    /* try { // try from 001a5bc8 to 001a5bec has its CatchHandler @ 001a5c09 */
    if ((local_40 != -0x8000000000000000) &&
       (cVar1 = _ZN6uu_pwd12logical_path16looks_reasonable17h198aec699ed31598E(lStack_38,local_30),
       cVar1 != '\0')) {
      param_1[2] = local_30;
      *param_1 = local_40;
      param_1[1] = lStack_38;
      return param_1;
    }
  }
  _ZN3std3env11current_dir17h8e5fbaefdf378c8cE(param_1);
  if (local_40 != -0x8000000000000000) {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h5f81ac5c3a3e7dd1E(&local_40);
  }
  return param_1;
}