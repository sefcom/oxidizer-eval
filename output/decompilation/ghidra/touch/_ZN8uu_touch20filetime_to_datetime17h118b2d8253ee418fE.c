void _ZN8uu_touch20filetime_to_datetime17h118b2d8253ee418fE(undefined4 *param_1)

{
  int local_24 [2];
  undefined4 local_1c;
  undefined local_18 [8];
  undefined4 local_10;
  
  _ZN6chrono8datetime40DateTime_LT_chrono__offset__utc__Utc_GT_14from_timestamp17h8ab0e73f75167f24E
            (local_24);
  if (local_24[0] == 0) {
    *param_1 = 0;
  }
  else {
    local_10 = local_1c;
    _ZN168__LT_chrono__datetime__DateTime_LT_chrono__offset__local__Local_GT__u20_as_u20_core__convert__From_LT_chrono__datetime__DateTime_LT_chrono__offset__utc__Utc_GT__GT__GT_4from17he1bf453ed4172c95E
              (param_1,local_18);
  }
  return;
}