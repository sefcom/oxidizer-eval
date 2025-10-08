void _ZN8uu_touch20filetime_to_datetime17h915ff47696d18514E(undefined4 *param_1)

{
  int local_24 [2];
  undefined4 local_1c;
  undefined local_18 [8];
  undefined4 local_10;
  
  _ZN6chrono8datetime40DateTime_LT_chrono__offset__utc__Utc_GT_14from_timestamp17h1ce8e0fb8cfe0735E
            (local_24);
  if (local_24[0] != 0) {
    local_10 = local_1c;
    (*(code *)
      PTR__ZN168__LT_chrono__datetime__DateTime_LT_chrono__offset__local__Local_GT__u20_as_u20_core__convert__From_LT_chrono__datetime__DateTime_LT_chrono__offset__utc__Utc_GT__GT__GT_4from17h90f246ab10ef0572E_003aa2e8
    )(param_1,local_18);
    return;
  }
  *param_1 = 0;
  return;
}