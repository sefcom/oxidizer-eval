__int64 __fastcall uu_more::Pager::page_up(__int64 a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rax
  bool v3; // cf
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  __int64 v15; // [rsp+10h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = __CFADD__(*(_QWORD *)(a1 + 120), v2);
  v4 = *(_QWORD *)(a1 + 120) + v2;
  v5 = -1LL;
  if ( !v3 )
    v5 = v4;
  result = 0LL;
  v7 = v1 - v5;
  if ( v1 < v5 )
    v7 = 0LL;
  *(_QWORD *)(a1 + 80) = v7;
  if ( *(_BYTE *)(a1 + 129) == 1 )
  {
    v13 = 0LL;
    v14 = 1LL;
    v15 = 0LL;
    if ( v1 <= v5 )
    {
      v12 = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 64);
      v9 = *(_QWORD *)(a1 + 72);
      while ( 1 )
      {
        v10 = uu_more::Pager::seek_to_line(a1, v7);
        if ( v10 )
          break;
        v15 = 0LL;
        if ( ((*(__int64 (__fastcall **)(__int64, __int64 *))(v9 + 128))(v8, &v13) & 1) != 0 )
        {
          v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
          break;
        }
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, &unk_1F70C, 1LL) )
        {
          *(_QWORD *)(a1 + 80) = --v7;
          if ( v7 )
            continue;
        }
        v12 = 0LL;
        goto LABEL_16;
      }
      v12 = v10;
    }
LABEL_16:
    core::ptr::drop_in_place<alloc::string::String>(&v13);
    return v12;
  }
  return result;
}