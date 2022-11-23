
ll gcd(ll a,ll b){
  if(b==0)
    return a;
  else gcd(a,b%a);
}
