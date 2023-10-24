# Struct x Ponteiro
s t r u c t p o i n t {
 i n t v a l u e ;
 } ;
 s t r u c t p o i n t s ;
s t r u c t p o i n t ∗ p t r = &s ;

s . v a l u e = 2 0;
(∗ p t r ) . v a l u e = 4 0;
 p t r −>v a l u e = 3 0;

 p r i n t f ( "%d\n" , s . v a l u e ) ;

#  malloc
i n t ∗p = m a l l o c ( s i z e o f ( i n t ) ) ; //1 i n t e i r o
2 c h a r ∗nome = m a l l o c ( s i z e o f ( c h a r ) ∗5 0 ) ; // s t r i n g 50 p o s i c o e s
3 f l o a t ∗ f = m a l l o c ( s i z e o f ( f l o a t ) ∗1 0 ) ; // v e t o r f l o a t − 10 p o s i c o e s
4 i n t ∗ i = ( i n t ∗) m a l l o c ( 5∗ s i z e o f ( i n t ) ) // t y p e c a s t d o s r e t o r n o s d a s
f u n ç õ e s :
5 // v e r s ão a n t i g a s de C, ou
p a r a C++
6 i f ( f ) {
7 f [ 1 ] = 4 ;
8 p r i n t f ( "%f \n" , f [ 1 ] ) ;
9 }
10
11 s t r u c t e n d e r e c o {
12 c h a r r u a [ 1 0 0 ] ;
13 i n t numero ;
14 } ;
15
16 s t r u c t e n d e r e c o ∗ end ;
17 end = m a l l o c ( s i z e o f ( s t r u c t e n d e r e c o ) ) ;
18
19 i f ( end ) {
20 end−>numero = 3 2 4;
21 }
