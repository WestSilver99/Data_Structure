# 순차 자료구조와 선형 리스트

<br/>

### 순차 자료구조의 개념

- 구현할 자료들을 논리적 순서로 메모리에 연속 저장하는 구현 방식
- 논리적인 순서와 물리적인 순서가 항상 일치해야 함
- C 프로그래밍에서 순차 자료구조의 구현 방식을 제공하는 프로그램 기법은 배열

<img src="https://images.velog.io/images/soltrawberry0707/post/15328353-e2a4-4177-acd9-0edbe1c664c5/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202021-11-04%20103104.png">

<br/>

### 선형 리스트

- 순서 리스트
- 자료들 간에 순서를 갖는 리스트
  <img src="https://t1.daumcdn.net/cfile/tistory/250D033C565C552A02">

### 선형 리스트의 저장

- 순차 방식으로 구현하는 선형 순차 리스트(선형 리스트)
  - 순차 자료구조는 원소를 논리적인 순서대로 메모리에 연속하여 저장
- 연결 방식으로 구현하는 선형 연결 리스트(연결 리스트)

<img src="https://mblogthumb-phinf.pstatic.net/MjAxNjExMTRfMTY3/MDAxNDc5MDg1NTkxMTk3.LE1j8Ir_5jWcp5Guz4-umxcMZClALqd-Q5dlujD-gjIg._eJyIBRayV80xcIQ1Yr3Gu0ZIbCohP3Rm7ZugyFsvFcg.PNG.shruddnr1/30.PNG?type=w800">

선형 리스트에서 원소의 위치

<br/>

### 선형 리스트에서 원소 삽입

- 선형 리스트 중간에 원소가 삽입되면, 그 이후의 원소들은 한 자리씩 자리를 뒤로 이동하여 물리적 순서를 논리적 순서와 일치시킴

- 삽입할 자리를 만들기 위한 자리 이동 횟수
  - (n+1)개의 원소로 이루어진 선형 리스트에서 k번 자리에 원소를 삽입하는 경우 : k번 원소부터 마지막 인덱스 n번 원소까지 (n-k+1)개의 원소를 이동
    - 이동횟수 = n-k+1 = 마지막 원소의 인덱스 - 삽입할 자리의 인덱스 +1

<img src="https://mblogthumb-phinf.pstatic.net/MjAxNjExMTRfMjA5/MDAxNDc5MDg1NjIzOTAz.m1yeu0MAI2IvJHovyWYNgPo28tlmr3nbZeh_q6CgraMg.VteltZpmqFVf61GdL1YjFCSg50Pu3nPQkUX_WqzF-3Yg.PNG.shruddnr1/31.PNG?type=w800">
