long _ZN2fd10filesystem17strip_current_dir17hccbc9a783f2543e7E(long param_1)

{
  long lVar1;
  
  lVar1 = _ZN3std4path4Path12strip_prefix17hf2675ccd78c74225E();
  if (lVar1 == 0) {
    lVar1 = param_1;
  }
  return lVar1;
}