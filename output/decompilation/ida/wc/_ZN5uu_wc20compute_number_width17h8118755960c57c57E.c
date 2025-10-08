__int64 __fastcall uu_wc::compute_number_width(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 dest; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-D8h]
  int v16; // [rsp+40h] [rbp-A8h]
  __int64 v17; // [rsp+58h] [rbp-90h]

  if ( *a1 )
  {
    v2 = 1LL;
    if ( (unsigned int)*a1 == 1 )
    {
      v3 = uu_wc::Settings::number_enabled(a2);
      v4 = a1;
      v5 = a1[3];
      if ( v3 != 1 || v5 != 1 )
      {
        if ( v5 )
        {
          v6 = (_QWORD *)a1[2];
          v7 = 8 * v5;
          v8 = 3 * v7;
          v2 = 1LL;
          v9 = 0LL;
          do
          {
            while ( *v6 == 0x8000000000000001LL )
            {
              v2 = 7LL;
              v6 += 3;
              v8 -= 24LL;
              if ( !v8 )
                goto LABEL_15;
            }
            std::fs::metadata(&dest);
            v10 = dest;
            if ( dest == 2 )
            {
              v10 = 2LL;
            }
            else
            {
              v11 = v17;
              if ( (v16 & 0xF000) != 0x8000 )
              {
                v11 = 0LL;
                v2 = 7LL;
              }
              v9 += v11;
            }
            a2 = v15;
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v10, v15);
            v6 += 3;
            v8 -= 24LL;
          }
          while ( v8 );
LABEL_15:
          if ( v9 )
          {
            v12 = core::num::int_log10::u64(v9, a2, v7, v4);
            return core::cmp::Ord::max((unsigned int)(v12 + 1), v2);
          }
        }
      }
    }
  }
  else
  {
    v2 = 7LL;
    if ( (unsigned int)uu_wc::Settings::number_enabled(a2) == 1 )
      return 1LL;
  }
  return v2;
}