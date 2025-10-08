void _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_5spawn17hc5293321aae3509eE
               (long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined local_130 [272];
  
                    /* try { // try from 009fc014 to 009fc01e has its CatchHandler @ 009fc0d2 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_015927f0
  )(&local_248);
  local_250 = *(undefined *)(param_2 + 6);
  local_268 = local_248;
  uStack_264 = uStack_244;
  uStack_260 = uStack_240;
  uStack_25c = uStack_23c;
                    /* try { // try from 009fc03a to 009fc046 has its CatchHandler @ 009fc0b7 */
  _ZN15linera_exporter7storage26SharedStorage_LT_C_C_S_GT_5clone17h30669d2fae9b9771E
            (&local_248,param_1);
  (*(code *)PTR_memcpy_01592358)(local_130,&local_248,0x110);
                    /* try { // try from 009fc069 to 009fc076 has its CatchHandler @ 009fc0b5 */
  uVar1 = _ZN15linera_exporter8runloops12task_manager24ExporterBuilder_LT_F_GT_5spawn17hba192a9f97e1c867E
                    (param_1 + 0x110,&local_268,local_130);
  local_248 = *param_2;
  uStack_244 = param_2[1];
  uStack_240 = param_2[2];
  uStack_23c = param_2[3];
  local_238 = param_2[4];
  uStack_234 = param_2[5];
  uStack_230 = param_2[6];
  uStack_22c = param_2[7];
  uVar1 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h6c27c20c7e5b26bdE
                    (param_1 + 0x1c0,&local_248,uVar1);
  _ZN4core3ptr147drop_in_place_LT_core__option__Option_LT_tokio__runtime__task__join__JoinHandle_LT_core__result__Result_LT__LP__RP__C_anyhow__Error_GT__GT__GT__GT_17haafe5bbb0c607ed8E
            (uVar1);
  return;
}