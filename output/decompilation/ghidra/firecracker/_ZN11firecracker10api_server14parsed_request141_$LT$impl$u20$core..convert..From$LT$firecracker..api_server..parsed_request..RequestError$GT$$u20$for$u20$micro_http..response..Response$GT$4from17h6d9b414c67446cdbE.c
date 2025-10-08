void _ZN11firecracker10api_server14parsed_request141__LT_impl_u20_core__convert__From_LT_firecracker__api_server__parsed_request__RequestError_GT__u20_for_u20_micro_http__response__Response_GT_4from17h6d9b414c67446cdbE
               (undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  char *local_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  char **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [24];
  undefined local_38 [24];
  
  local_88 = 
  _ZN92__LT_firecracker__api_server__parsed_request__RequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h9f45c28be512aa9fE
  ;
  local_80 = &DAT_00130b60;
  local_78 = 1;
  local_60 = 0;
  local_70 = &local_90;
  local_68 = 1;
  local_90 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE(local_38,0,param_3,&local_80);
  _ZN11firecracker10api_server9ApiServer18json_fault_message17hfc3a57c57b134c30E(local_50,local_38);
  cVar1 = '\x03';
  if (*param_2 == '\x01') {
    cVar1 = param_2[1];
  }
  _ZN11firecracker10api_server9ApiServer13json_response17h255598c4a3030406E(param_1,cVar1,local_50);
  _ZN4core3ptr74drop_in_place_LT_firecracker__api_server__parsed_request__RequestError_GT_17h8c92b72a4c4e447aE
            (param_2);
  return;
}