void _ZN7uu_tail6follow5files12FileHandling17canonicalize_path17h83fd2d9f8818f482E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  cVar1 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_0027d838)
                    (param_2,param_3);
  if ((cVar1 == '\0') &&
     (cVar1 = (*(code *)
                PTR__ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_8is_stdin17h9c895f48d1ad1ebfE_0027d840
              )(param_2,param_3), cVar1 == '\0')) {
    _ZN3std2fs12canonicalize17h51813c249f73b0e1E(&local_30,param_2,param_3);
    param_1[2] = local_20;
    *param_1 = local_30;
    param_1[1] = uStack_28;
    return;
  }
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0027d848)
            (param_1,param_2,param_3);
  return;
}