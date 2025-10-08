void __fastcall firecracker::api_server::parsed_request::checked_id(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // al
  char v5; // al
  char v6; // cl
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    v7[0] = a2;
    v7[1] = a2 + a3;
    v4 = core::iter::traits::iterator::Iterator::try_fold(v7);
    v5 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v4);
    v6 = 2;
    if ( v5 )
    {
      *(_QWORD *)(a1 + 8) = a2;
      *(_QWORD *)(a1 + 16) = a3;
      v6 = 5;
    }
  }
  else
  {
    v6 = 0;
  }
  *(_BYTE *)a1 = v6;
}