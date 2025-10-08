void _ZN11firecracker10api_server9ApiServer13json_response17h255598c4a3030406E
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined auStack_c8 [24];
  undefined local_b0 [144];
  
  (*(code *)PTR__ZN10micro_http8response8Response3new17h78e744fb9400e084E_004bfb88)
            (local_b0,1,param_2);
  _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17h3161f6a348897a70E
            (auStack_c8,param_3);
  (*(code *)PTR__ZN10micro_http8response8Response8set_body17hb2a8ea3742c0d431E_004bfb90)
            (local_b0,auStack_c8);
  (*(code *)PTR_memcpy_004bf3b8)(param_1,local_b0,0x90);
  return;
}