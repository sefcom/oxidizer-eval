bool _ZN2rg6search21SearchWorker_LT_W_GT_17should_preprocess17h843309bce3ef4a26E(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x230) != 0) {
    lVar1 = _ZN6ignore9overrides8Override7matched17h96500a335d15963eE(param_1 + 0x218);
    return lVar1 != 1;
  }
  return true;
}