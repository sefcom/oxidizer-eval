void __rustcall uu_touch::filetime_to_datetime(undefined4 *param_1)

{
  int local_24 [2];
  undefined4 local_1c;
  undefined local_18 [8];
  undefined4 local_10;
  
  chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(local_24);
  if (local_24[0] == 0) {
    *param_1 = 0;
  }
  else {
    local_10 = local_1c;
    _<chrono::datetime::DateTime<chrono::offset::local::Local>as_core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>
    ::from(param_1,local_18);
  }
  return;
}