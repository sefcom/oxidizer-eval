double __fastcall uu_numfmt::options::RoundMethod::round(_BYTE *a1, double result)
{
  switch ( *a1 )
  {
    case 0:
      goto LABEL_6;
    case 1:
      goto LABEL_3;
    case 2:
      if ( result < 0.0 )
        goto LABEL_3;
      goto LABEL_6;
    case 3:
      if ( result >= 0.0 )
LABEL_3:
        result = floor(result);
      else
LABEL_6:
        result = ceil(result);
      break;
    case 4:
      round();
      break;
  }
  return result;
}