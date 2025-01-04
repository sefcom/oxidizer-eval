__int64 __fastcall uu_env::split_iterator::SplitIterator::state_root(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  _OWORD v4[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]

  while ( 1 )
  {
    uu_env::split_iterator::SplitIterator::state_delimiter(v4, a2);
    if ( LODWORD(v4[0]) != 7 )
      break;
    core::ptr::drop_in_place<core::result::Result<(),uu_env::parse_error::ParseError>>(v4);
  }
  if ( LODWORD(v4[0]) == 6 )
  {
    *(_DWORD *)a1 = 8;
    return core::ptr::drop_in_place<core::result::Result<(),uu_env::parse_error::ParseError>>(v4);
  }
  else
  {
    result = v5;
    *(_QWORD *)(a1 + 32) = v5;
    v3 = v4[0];
    *(_OWORD *)(a1 + 16) = v4[1];
    *(_OWORD *)a1 = v3;
  }
  return result;
}
