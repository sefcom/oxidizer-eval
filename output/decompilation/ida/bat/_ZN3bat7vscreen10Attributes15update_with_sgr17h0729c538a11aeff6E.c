__int64 __fastcall bat::vscreen::Attributes::update_with_sgr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r15
  __int128 v7; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+18h] [rbp-A0h]
  __int64 v9; // [rsp+20h] [rbp-98h]
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int64 v11; // [rsp+30h] [rbp-88h]
  __int64 v12; // [rsp+38h] [rbp-80h]
  _QWORD v13[2]; // [rsp+40h] [rbp-78h] BYREF
  char v14[48]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v15; // [rsp+80h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v14, 59LL, a2, a3);
  v13[0] = 0LL;
  v13[1] = a3;
  v15 = 1;
  *(_BYTE *)(a1 + 264) = 1;
  result = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(v13);
  if ( (_BYTE)result != 2 )
  {
    v12 = a1 + 168;
    v11 = a1 + 192;
    v9 = a1 + 24;
    v10 = a1 + 48;
    do
    {
      if ( (result & 1) != 0 )
      {
LABEL_4:
        bat::vscreen::Attributes::sgr_reset(a1);
      }
      else
      {
        v5 = WORD1(result);
        switch ( WORD1(result) )
        {
          case 0:
            goto LABEL_4;
          case 1:
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7);
            core::ptr::drop_in_place<alloc::string::String>(a1 + 120);
            *(_QWORD *)(a1 + 136) = v8;
            *(_OWORD *)(a1 + 120) = v7;
            break;
          case 2:
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7);
            core::ptr::drop_in_place<alloc::string::String>(a1 + 144);
            *(_QWORD *)(a1 + 160) = v8;
            *(_OWORD *)(a1 + 144) = v7;
            break;
          case 3:
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7);
            v6 = v11;
            goto LABEL_21;
          case 4:
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7);
            v6 = v12;
            goto LABEL_21;
          case 0x16:
            *(_QWORD *)(a1 + 136) = 0LL;
            *(_QWORD *)(a1 + 160) = 0LL;
            break;
          case 0x17:
            *(_QWORD *)(a1 + 208) = 0LL;
            break;
          case 0x18:
            *(_QWORD *)(a1 + 184) = 0LL;
            break;
          default:
            if ( (int)result - 1966080 < (unsigned int)&unk_A0000 )
              goto LABEL_10;
            if ( (int)result - 2621440 < (unsigned int)&unk_A0000 )
              goto LABEL_18;
            if ( (result & 0xFFFE0000) == 0x3A0000 )
            {
              bat::vscreen::Attributes::parse_color(&v7, v5, v13);
              v6 = v10;
              goto LABEL_21;
            }
            if ( (int)result - 5898240 < (unsigned int)&unk_80000 )
            {
LABEL_10:
              bat::vscreen::Attributes::parse_color(&v7, v5, v13);
              core::ptr::drop_in_place<alloc::string::String>(a1);
              *(_QWORD *)(a1 + 16) = v8;
              *(_OWORD *)a1 = v7;
              break;
            }
            if ( (int)result - 6553600 < (unsigned int)&unk_80000 )
            {
LABEL_18:
              bat::vscreen::Attributes::parse_color(&v7, v5, v13);
              v6 = v9;
LABEL_21:
              core::ptr::drop_in_place<alloc::string::String>(v6);
              *(_QWORD *)(v6 + 16) = v8;
              *(_OWORD *)v6 = v7;
              break;
            }
            break;
        }
      }
      result = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(v13);
    }
    while ( (_BYTE)result != 2 );
  }
  return result;
}