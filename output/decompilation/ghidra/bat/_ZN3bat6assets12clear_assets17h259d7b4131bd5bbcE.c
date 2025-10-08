void _ZN3bat6assets12clear_assets17h259d7b4131bd5bbcE(undefined8 param_1,undefined8 param_2)

{
  undefined local_30 [24];
  
  _ZN3std4path4Path4join17hea24a9da038aebd6E(local_30,param_1,param_2,"themes.bin",10);
  _ZN3bat6assets11clear_asset17hee2122ec557ceffaE(local_30,"theme set cache",0xf);
  _ZN3std4path4Path4join17hea24a9da038aebd6E(local_30,param_1,param_2,"syntaxes.bin",0xc);
  _ZN3bat6assets11clear_asset17hee2122ec557ceffaE(local_30,"syntax set cache",0x10);
  _ZN3std4path4Path4join17hea24a9da038aebd6E(local_30,param_1,param_2,"metadata.yaml",0xd);
  _ZN3bat6assets11clear_asset17hee2122ec557ceffaE(local_30,"metadata file",0xd);
  return;
}