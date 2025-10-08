char __fastcall bat::style::ComponentAction::extract_from_str(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  char result; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v16[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a3;
  v4 = a2;
  v16[0] = a2;
  v16[1] = a2 + a3;
  if ( (core::str::validations::next_code_point(v16) & 1) == 0 )
    goto LABEL_6;
  if ( v5 != 43 )
  {
    if ( v5 == 45 )
    {
      v15 = 0;
      v6 = core::char::methods::encode_utf8_raw(45LL, &v15, 4LL);
      v8 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v6, v7, a2, v3);
      if ( !v8 )
        core::option::unwrap_failed(&off_6CEC78);
      v4 = v8;
      v3 = v9;
      result = 2;
      goto LABEL_7;
    }
LABEL_6:
    result = 0;
    goto LABEL_7;
  }
  v15 = 0;
  v11 = core::char::methods::encode_utf8_raw(43LL, &v15, 4LL);
  v13 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v11, v12, a2, v3);
  if ( !v13 )
    core::option::unwrap_failed(&off_6CEC90);
  v4 = v13;
  v3 = v14;
  result = 1;
LABEL_7:
  *(_BYTE *)a1 = result;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}