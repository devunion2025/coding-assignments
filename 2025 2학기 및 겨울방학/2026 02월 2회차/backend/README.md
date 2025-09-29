# 📝 Week 11 – 종합 프로젝트 과제

## 과제 주제

**미니 블로그 API 구현 (글 CRUD + 작성자별 글 필터링)**

---

## 과제 요구사항

1. **프로그램 구조**

   * **Python + Flask** 또는 **Node.js + Express**를 사용하여 로컬 환경에서 실행 가능한 서버 구현
   * 데이터 저장 방식: **SQLite** 또는 **JSON 파일** 사용
   * 프로그램의 흐름은 다음과 같이 구성할 것:

     1. 글 목록 조회 (`GET /posts`)
     2. 글 작성 (`POST /posts`)
     3. 글 수정 (`PATCH /posts/<id>`)
     4. 글 삭제 (`DELETE /posts/<id>`)
     5. 작성자별 글 필터링 (`GET /posts?author=<작성자이름>`)

2. **함수/라우트 구조**

   * Flask 예시:

     * `@app.route('/posts', methods=['GET'])` → 전체 글 또는 작성자 필터링
     * `@app.route('/posts', methods=['POST'])` → 새 글 작성
     * `@app.route('/posts/<int:id>', methods=['PATCH'])` → 글 수정
     * `@app.route('/posts/<int:id>', methods=['DELETE'])` → 글 삭제
   * Express 예시:

     * `app.get('/posts', ...)`, `app.post('/posts', ...)`, `app.patch('/posts/:id', ...)`, `app.delete('/posts/:id', ...)`

3. **데이터 구조 요구사항**

   * 글 항목: **id, 제목(title), 내용(content), 작성자(author), 작성일(created_at)**
   * 글 작성 시 자동으로 고유 id 및 작성일 부여
   * 작성자별 글 조회 시 쿼리 파라미터를 사용하여 필터링

4. **기능 요구사항**

   * 모든 요청과 응답은 **JSON 형식**으로 처리
   * 글 CRUD 및 작성자별 필터링 기능 정상 동작
   * 서버는 로컬 환경에서 실행 가능하며, 브라우저 또는 Postman에서 테스트 가능
   * 불필요한 외부 API나 유료 기능 사용 금지
