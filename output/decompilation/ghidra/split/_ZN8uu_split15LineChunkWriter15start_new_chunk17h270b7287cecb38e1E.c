void _ZN8uu_split15LineChunkWriter15start_new_chunk17h270b7287cecb38e1E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  (*(code *)
    PTR__ZN96__LT_uu_split__filenames__FilenameIterator_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h029d1b66ecb898b7E_00211ee0
  )(&local_90,param_3);
  uVar1 = local_90;
  if (*(char *)(param_2 + 0xa0) != '\0') {
    local_90 = 0;
    local_78 = 1;
    local_68 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00212140
    ;
    local_60 = &PTR_s_creating_file_0020af08;
    local_58 = 2;
    local_40 = 0;
    local_50 = &local_70;
    local_48 = 1;
                    /* try { // try from 0016fbdd to 0016fbfe has its CatchHandler @ 0016fc19 */
    local_70 = &local_90;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00212148)(&local_60);
  }
  _ZN8uu_split8Settings26instantiate_current_writer17hd292c92efbe44a3cE
            (param_1,param_2,local_88,local_80,1);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7f9a6516de84fa50E(uVar1,local_88);
  return;
}