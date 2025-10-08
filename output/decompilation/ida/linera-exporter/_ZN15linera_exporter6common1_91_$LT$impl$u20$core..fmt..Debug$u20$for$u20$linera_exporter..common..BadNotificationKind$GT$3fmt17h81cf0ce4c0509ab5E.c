__int64 __fastcall linera_exporter::common::_::<impl core::fmt::Debug for linera_exporter::common::BadNotificationKind>::fmt(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r15
  __int64 (__fastcall **v4)(); // r8
  _BYTE v6[40]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1;
  v3 = *a1;
  if ( *a1 == 0x8000000000000011LL )
  {
    core::fmt::Formatter::debug_struct(v6, a2, aInvalidreason, 13LL);
    if ( a1[1] )
    {
      v2 = a1 + 1;
      v4 = &off_13F2318;
LABEL_6:
      core::fmt::builders::DebugStruct::field(v6, aInner_0, 5LL, v2, v4);
    }
  }
  else
  {
    core::fmt::Formatter::debug_struct(v6, a2, aInvalidchainid, 14LL);
    if ( v3 != 0x8000000000000010LL )
    {
      v4 = &off_13F22F8;
      goto LABEL_6;
    }
  }
  return core::fmt::builders::DebugStruct::finish(v6);
}