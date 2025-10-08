__int64 __fastcall alacritty::display::color::List::fill_named(__int64 a1, __int64 a2)
{
  __int16 *v2; // rcx
  __int16 v3; // cx
  int v4; // ebp
  char v5; // r15
  __int64 v6; // rax
  char v7; // bp
  unsigned __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  const char *v18; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-98h]
  const char *v20; // [rsp+18h] [rbp-90h]
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  unsigned __int16 *v23; // [rsp+30h] [rbp-78h]
  unsigned __int16 *v24; // [rsp+38h] [rbp-70h]
  unsigned __int16 *v25; // [rsp+40h] [rbp-68h]
  char **v26; // [rsp+48h] [rbp-60h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h]
  __int128 v29; // [rsp+60h] [rbp-48h]

  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 98);
  *(_WORD *)a1 = *(_WORD *)(a2 + 96);
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a2 + 101);
  *(_WORD *)(a1 + 3) = *(_WORD *)(a2 + 99);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 104);
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 102);
  *(_BYTE *)(a1 + 11) = *(_BYTE *)(a2 + 107);
  *(_WORD *)(a1 + 9) = *(_WORD *)(a2 + 105);
  *(_BYTE *)(a1 + 14) = *(_BYTE *)(a2 + 110);
  *(_WORD *)(a1 + 12) = *(_WORD *)(a2 + 108);
  *(_WORD *)(a1 + 15) = *(_WORD *)(a2 + 111);
  *(_BYTE *)(a1 + 17) = *(_BYTE *)(a2 + 113);
  *(_WORD *)(a1 + 18) = *(_WORD *)(a2 + 114);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 116);
  *(_BYTE *)(a1 + 23) = *(_BYTE *)(a2 + 119);
  *(_WORD *)(a1 + 21) = *(_WORD *)(a2 + 117);
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 120);
  *(_BYTE *)(a1 + 26) = *(_BYTE *)(a2 + 122);
  *(_WORD *)(a1 + 27) = *(_WORD *)(a2 + 123);
  *(_BYTE *)(a1 + 29) = *(_BYTE *)(a2 + 125);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 128);
  *(_WORD *)(a1 + 30) = *(_WORD *)(a2 + 126);
  *(_BYTE *)(a1 + 35) = *(_BYTE *)(a2 + 131);
  *(_WORD *)(a1 + 33) = *(_WORD *)(a2 + 129);
  *(_WORD *)(a1 + 36) = *(_WORD *)(a2 + 132);
  *(_BYTE *)(a1 + 38) = *(_BYTE *)(a2 + 134);
  *(_WORD *)(a1 + 39) = *(_WORD *)(a2 + 135);
  *(_BYTE *)(a1 + 41) = *(_BYTE *)(a2 + 137);
  *(_WORD *)(a1 + 42) = *(_WORD *)(a2 + 138);
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 140);
  *(_BYTE *)(a1 + 47) = *(_BYTE *)(a2 + 143);
  v2 = (__int16 *)(a2 + 152);
  if ( (*(_BYTE *)(a2 + 144) & 1) != 0 )
    v2 = (__int16 *)(a2 + 145);
  *(_WORD *)(a1 + 45) = *(_WORD *)(a2 + 141);
  BYTE2(v26) = *((_BYTE *)v2 + 2);
  v3 = *v2;
  LOWORD(v26) = v3;
  *(_BYTE *)(a1 + 803) = BYTE2(v26);
  *(_WORD *)(a1 + 801) = v3;
  *(_BYTE *)(a1 + 770) = *(_BYTE *)(a2 + 154);
  *(_WORD *)(a1 + 768) = *(_WORD *)(a2 + 152);
  *(_WORD *)(a1 + 771) = *(_WORD *)(a2 + 155);
  *(_BYTE *)(a1 + 773) = *(_BYTE *)(a2 + 157);
  v4 = *(unsigned __int16 *)(a2 + 149) | (*(unsigned __int8 *)(a2 + 151) << 16);
  v5 = *(_BYTE *)(a2 + 148);
  v6 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*(unsigned __int16 *)(a2 + 152) | (*(unsigned __int8 *)(a2 + 154) << 16));
  if ( (v5 & 1) != 0 )
    LODWORD(v6) = v4;
  *(_WORD *)(a1 + 804) = v6;
  *(_BYTE *)(a1 + 806) = BYTE2(v6);
  v7 = *(_BYTE *)(a2 + 158);
  v8 = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
  if ( v7 == 1 )
  {
    if ( v8 > 4 )
    {
      v26 = &off_881FC0;
      v27 = 1LL;
      v28 = 8LL;
      v29 = 0LL;
      v18 = aAlacrittyDispl;
      v19 = 25LL;
      v20 = aAlacrittyDispl;
      v21 = 25LL;
      v22 = log::__private_api::loc(&off_881FF8);
      log::__private_api::log(&v26, 5LL, &v18);
    }
    *(_BYTE *)(a1 + 779) = *(_BYTE *)(a2 + 161);
    *(_WORD *)(a1 + 777) = *(_WORD *)(a2 + 159);
    *(_BYTE *)(a1 + 782) = *(_BYTE *)(a2 + 164);
    *(_WORD *)(a1 + 780) = *(_WORD *)(a2 + 162);
    *(_BYTE *)(a1 + 785) = *(_BYTE *)(a2 + 167);
    *(_WORD *)(a1 + 783) = *(_WORD *)(a2 + 165);
    *(_BYTE *)(a1 + 788) = *(_BYTE *)(a2 + 170);
    *(_WORD *)(a1 + 786) = *(_WORD *)(a2 + 168);
    *(_BYTE *)(a1 + 791) = *(_BYTE *)(a2 + 173);
    *(_WORD *)(a1 + 789) = *(_WORD *)(a2 + 171);
    *(_WORD *)(a1 + 792) = *(_WORD *)(a2 + 174);
    *(_BYTE *)(a1 + 794) = *(_BYTE *)(a2 + 176);
    *(_WORD *)(a1 + 795) = *(_WORD *)(a2 + 177);
    *(_BYTE *)(a1 + 797) = *(_BYTE *)(a2 + 179);
    *(_BYTE *)(a1 + 800) = *(_BYTE *)(a2 + 182);
    result = *(unsigned __int16 *)(a2 + 180);
    *(_WORD *)(a1 + 798) = result;
  }
  else
  {
    v23 = (unsigned __int16 *)(a2 + 108);
    v24 = (unsigned __int16 *)(a2 + 111);
    v25 = (unsigned __int16 *)(a2 + 114);
    if ( v8 >= 5 )
    {
      v26 = &off_881FD0;
      v27 = 1LL;
      v28 = 8LL;
      v29 = 0LL;
      v18 = aAlacrittyDispl;
      v19 = 25LL;
      v20 = aAlacrittyDispl;
      v21 = 25LL;
      v22 = log::__private_api::loc(&off_881FE0);
      log::__private_api::log(&v26, 5LL, &v18);
    }
    v10 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*(unsigned __int16 *)(a2 + 96) | (*(unsigned __int8 *)(a2 + 98) << 16));
    *(_WORD *)(a1 + 777) = v10;
    *(_BYTE *)(a1 + 779) = BYTE2(v10);
    v11 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*(unsigned __int16 *)(a2 + 99) | (*(unsigned __int8 *)(a2 + 101) << 16));
    *(_WORD *)(a1 + 780) = v11;
    *(_BYTE *)(a1 + 782) = BYTE2(v11);
    v12 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*(unsigned __int16 *)(a2 + 102) | (*(unsigned __int8 *)(a2 + 104) << 16));
    *(_WORD *)(a1 + 783) = v12;
    *(_BYTE *)(a1 + 785) = BYTE2(v12);
    v13 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*(unsigned __int16 *)(a2 + 105) | (*(unsigned __int8 *)(a2 + 107) << 16));
    *(_WORD *)(a1 + 786) = v13;
    *(_BYTE *)(a1 + 788) = BYTE2(v13);
    v14 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*v23 | (*((unsigned __int8 *)v23 + 2) << 16));
    *(_WORD *)(a1 + 789) = v14;
    *(_BYTE *)(a1 + 791) = BYTE2(v14);
    v15 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*v24 | (*((unsigned __int8 *)v24 + 2) << 16));
    *(_WORD *)(a1 + 792) = v15;
    *(_BYTE *)(a1 + 794) = BYTE2(v15);
    v16 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*v25 | (*((unsigned __int8 *)v25 + 2) << 16));
    *(_WORD *)(a1 + 795) = v16;
    *(_BYTE *)(a1 + 797) = BYTE2(v16);
    v17 = <alacritty::display::color::Rgb as core::ops::arith::Mul<f32>>::mul(*(unsigned __int16 *)(a2 + 117) | (*(unsigned __int8 *)(a2 + 119) << 16));
    *(_WORD *)(a1 + 798) = v17;
    result = HIWORD(v17);
    *(_BYTE *)(a1 + 800) = result;
  }
  return result;
}