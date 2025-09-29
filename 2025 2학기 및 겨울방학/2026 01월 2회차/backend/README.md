# 📝 Week 9 – 데이터 추가/삭제 API 과제

## 과제 주제

**할 일(To-do) 목록 관리 API 구현 (추가/삭제 + 완료 상태 수정)**

---

## 과제 요구사항

1. **프로그램 구조**

   * **Python + Flask** 또는 **Node.js + Express**를 사용하여 간단한 서버 구현
   * 서버는 로컬 환경에서 실행 가능하도록 설정
   * 프로그램의 흐름은 다음과 같이 구성할 것:

     1. `/todos` GET 요청 → 전체 할 일 목록 JSON 반환
     2. `/todos` POST 요청 → 새 할 일 추가
     3. `/todos/<id>` DELETE 요청 → 특정 할 일 삭제
     4. `/todos/<id>` PATCH 요청 → 완료 상태(`completed`) 수정

2. **함수/라우트 구조**

   * Flask 예시:

     * `@app.route('/todos', methods=['GET'])` → 전체 목록 반환
     * `@app.route('/todos', methods=['POST'])` → 새 항목 추가
     * `@app.route('/todos/<int:id>', methods=['DELETE'])` → 항목 삭제
     * `@app.route('/todos/<int:id>', methods=['PATCH'])` → 완료 상태 수정
   * Express 예시:

     * `app.get('/todos', ...)`, `app.post('/todos', ...)`, `app.delete('/todos/:id', ...)`, `app.patch('/todos/:id', ...)`

3. **기능 요구사항**

   * 할 일 항목에는 **id, 제목(title), 완료 여부(completed)** 포함
   * 새 할 일 추가 시 자동으로 고유 id 부여
   * 삭제 및 완료 상태 수정 시 해당 id 확인 후 처리
   * 모든 응답은 **JSON 형식**으로 반환
   * 서버는 로컬 환경에서 실행 가능하며, 브라우저 또는 Postman에서 테스트 가능
